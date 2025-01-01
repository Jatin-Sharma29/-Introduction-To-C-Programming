#include<stdio.h>
int main(){
    int i=0,j=0,n,count=0;
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        freq[i]=-1;
    }
    for( i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    for( i=0;i<n;i++){
        if(freq[i]==1){
            printf("%d",arr[i]);
        }
    }
    return 0;
}
/*
code for leetcode
int singleNumber(int* nums, int numsSize) {
    int i=0,j=0,count=0,freq[numsSize];
    for( i=0;i<numsSize;i++){
        freq[i]=-1;
    }
    for( i=0;i<numsSize;i++){
        count=1;
        for(j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    for(i=0;i<numsSize;i++){
        if(freq[i]==1){
        return nums[i];
        }
    }
    return -1;
}*/