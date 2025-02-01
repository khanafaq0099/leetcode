/* Code to reverse array using two pointer approach*/
#include <stdio.h>
void reverse(int *arr, int size) {
	int head = 0;
	int tail = size-1;
	if(head < tail) {
		int temp = arr[head];
		arr[head] = arr[tail];
		arr[tail] = temp;
		head++;
		tail--;
	}
	
	for(int i = 0; i < size; i++){
	    printf("%d ",arr[i]);
	}

}
int main()
{
	int arr[5] = {1,2,3,4,5};
	int size  = sizeof(arr)/sizeof(arr[0]);
	reverse(arr,size);
	return 0;
}