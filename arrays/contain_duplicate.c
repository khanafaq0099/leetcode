/* Problem Description */
/**
 * Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

bool containsDuplicate(int* nums, int numsSize) 
{

        qsort(nums, numsSize, sizeof(nums[0]), comp);
        for(int k = 0; k < numsSize - 1; k++){
            if(nums[k+1] == nums[k]){
                return true;
            }
        }
        return false;
        
    
}

int main(){

    int nums[] = {5,2,3,1};
    int size = sizeof(nums)/sizeof(nums[0]);
    printf("Output : %d\n",containsDuplicate(nums,size));
}