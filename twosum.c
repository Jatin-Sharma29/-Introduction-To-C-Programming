#include<stdio.h>
#include<stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
       int i,j;
       *returnSize=2;
    int *result_arr=(int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                result_arr[0]=i;
                result_arr[1]=j;
                return result_arr;
            }
        }
    }
    free(result_arr);
    *returnSize=0;
    return NULL;
}