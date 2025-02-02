#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("enter array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    int ele;
    printf("enter the element to search\n");
    scanf("%d",&ele);
    for(int i=0;i<n;i++){
        if(*(arr+i)==ele){
            printf("element found at index %d",i);
            break;
        }
    }
    free(arr);
    return 0;
}