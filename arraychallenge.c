#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max_so_far=arr[0];
    count=1;
    for(int i=1;i<n;i++){
        if(arr[i]>max_so_far){
            count++;
            max_so_far=arr[i];
        }
    }
    printf("%d",count);
    return 0;
}