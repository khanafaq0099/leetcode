// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements without in-place

#include <stdio.h>
#include <stdlib.h>
void moveZeroes(int* nums, int numsSize){
    
    int track = 0;
    int *cpy = (int*)malloc(numsSize * sizeof(int));
    
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > 0)
        {
            cpy[track++]  = nums[i];
        }
    }
    
    while(track < numsSize)
    {
        cpy[track] = 0;
        track++;
    }
    
    for(int j =0; j< numsSize; j++)
        printf("%d ", cpy[j]);
    printf("\n");

    free(cpy); 
}

int main()
{
    int nums[8] = {1,2,3,0,9,0,1,2};
    moveZeroes(nums,  8);
    return 0;
}