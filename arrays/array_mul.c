#include <stdio.h>
#include <stdlib.h>

void process(int *arr, int size)
{
    int pos = 0;

    int *res = (int *) malloc(size *sizeof(int));
    for (int i = 0; i < size; i++)
    {
        int result = 1;
        for (int j = 0; j < size; j++)
        {
            if (j != pos)
                result = result * arr[j];
        }
        res[pos] = result;
        pos++;
    }

    printf("\n");
    for (int k = 0; k < size; k++)
    {
        printf(" %d \n", res[k]);
    }

    free(res);
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    process(arr,size);
}