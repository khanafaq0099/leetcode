/**
 *  C program to move zeros to start of array.
 */

 #include <stdio.h>
 #include <stdlib.h>
 void movezero(int *arr, int size){
    int *ret = (int *)malloc(size * sizeof(int));
    int pos = size - 1;
     
    for(int i = size - 1; i >= 0; i--)
        if(arr[i] != 0)
            ret[pos--] = arr[i];
        
    while (pos >= 0)
    {
        ret[pos] = 0; 
        pos--;
    } 

    for(int k = 0; k < size; k++)
        printf("%d ", ret[k]);
     
    free(ret);
 }
 
 int main()
 {
     int arr[11] = {1,3,0,8,5,0,0,0,0,1,0};
     int size = sizeof(arr)/sizeof(arr[0]);
     movezero(arr, size);
     return 0;
 }