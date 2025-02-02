#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    int ele;
    printf("Enter the element to remove\n");
    scanf("%d",&ele);
    for(int i=0;i<n;){
        if(*(arr+i)==ele){
            for(int j=i;j<n-1;j++){
                *(arr+j)=*(arr+j+1);
            }
            n--;
        } else i++;
    }
    printf("Array after removing %d is\n",ele);
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    free(arr);
    return 0;
}