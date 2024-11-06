#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter five numbers\n");
    for(int i=0;i<5;i++){
    printf("Enter number for index %d=",i);
    scanf("%d",&arr[i]);
    }
    printf("Elements of array are");
    for(int i=0;i<5;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}