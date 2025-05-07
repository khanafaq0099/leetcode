//C Program to shfit negative number of array to right 
#include <stdio.h>

void shift(int arr[],int len){
    int pos = len - 1;
    for(int i = len-1; i>=0; i--){
        if(arr[i] < 0){
            int temp  = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
            pos--;
        }
    }
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[] = {1,-3,4,-6,5,6,-1,12,43};
    int len = sizeof(arr)/sizeof(arr[0]);

    shift(arr,len);


}
