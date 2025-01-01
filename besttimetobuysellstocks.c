#include<stdio.h>
int main(){
    int n,max=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[j]-arr[i])>max)
            max=arr[j]-arr[i];
        }
    }
    printf("%d",max);
    return 0;
}