#include<stdio.h>
#include<stdlib.h>
void delete(int *arr,int *n){
    int key;
    printf("enter the element you want to delete ");
    scanf("%d",&key);
    for(int i=0;i<*n;){
        if(arr[i]==key){
            for(int j=i;j<*n-1;j++){
                arr[j]=arr[j+1];
            }
            (*n)--;
        } else i++;
    }
    printf("Array after deleting the element is:\n");
    for(int i=0;i<*n;i++){
        printf("%d ",arr[i]);
    }
}
void insert(int **arr,int *n){
    int key,index;
    printf("enter the element you want to insert ");
    scanf("%d",&key);
    printf("enter the index at which you want to insert the element ");
    scanf("%d",&index);
    *arr=realloc(*arr,(*n+1)*sizeof(int));
    for(int i=*n-1;i>index;i--){
        (*arr)[i]=(*arr)[i+1];
    }
    (*arr)[index]=key;
    printf("Array after inserting the element is:\n");
    for(int i=0;i<*n+1;i++){
        printf("%d ",(*arr)[i]);
    }
}
void rotate_left(int *arr,int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    printf("Array after rotating left is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void rotate_right(int *arr,int n){
    int temp=arr[n-1];
    for(int i=n-1;i>=0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    printf("Array after rotating right is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    printf("Enter the operation you want to perform\n");
    printf("1.delete an element\n2.insert an element\n");
    printf("3.rotate the array to the left\n4.rotate the array to the right\n5.exit\n");
    int choice;
    scanf("%d",&choice);
    if(choice==5){
        return 0;
    }
    int n;
    printf("enter the size of array ");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("enter the elements of array ");
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    switch(choice){
        case 1:
            delete(arr,&n);
            break;
        case 2:
            insert(&arr,&n);
            break;
        case 3:
            rotate_left(arr,n);
            break;
        case 4:
            rotate_right(arr,n);
            break;
        default:
            printf("Invalid choice");
    }
    free(arr);
    return 0;
}