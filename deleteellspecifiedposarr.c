#include<stdio.h>
int main(){
    int n,pos;
    printf("Enter the size of array:"); 
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of element you want to delete:");
    scanf("%d",&pos);
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}