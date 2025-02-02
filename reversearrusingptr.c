#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr=(int*)malloc(10*sizeof(int));
    printf("enter the elements of array\n");
    for(int i=0;i<10;i++){
        scanf("%d",arr+i);
    }
    printf("reverse of array is\n");
    for(int i=10-1;i>=0;i--){
        printf("%d ",*(arr+i));
    }
    free(arr);
    return 0;
}