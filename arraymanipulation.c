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
    if(index>*n || index<*n){
    printf("Invalid Position !!!!!\n");
    exit(0);
    }
    *arr=realloc(*arr,(*n + 1)*sizeof(int));
    for(int i=*n-1;i>=index;i--){
        (*arr)[i+1]=(*arr)[i];
    }
    (*arr)[index]=key;
    printf("Array after inserting the element is:\n");
    for(int i=0;i<*n+1;i++){
        printf("%d ",(*arr)[i]);
    }
}
void update(int *arr,int *n){
    int val,index;
    printf("enter the element you want to update :  ");
    scanf("%d",&val);
    printf("Enter the Index of the element you want to update: ");
    scanf("%d",&index);
    if(index>*n){
        printf("Invalid Position !!!\n");
        exit(0);
    }
    arr[index]=val;
    printf("Array after updating the element is:\n");
    for(int i=0;i<*n;i++){
        printf("%d ",arr[i]);
    }
}
void search(int *arr,int *n){
    int val;
    printf("enter the element you want to search ");
    scanf("%d",&val);
    for(int i=0;i<*n;i++){
        if(arr[i]==val){
        printf("Element found at index %d\n",i);
    }
}
}
void traverse(int *arr,int *n){
    printf("Elements of array are :");
    for(int i=0;i<*n;i++){
    printf("%d ",arr[i]);
}
}
int main(){
    printf("Enter the operation you want to perform\n");
    printf("1.delete an element\n2.insert an element\n");
    printf("3.update the element of an array\n4.search an element from array\n5.traverse all elements of the array\n");
    printf("6.exit\n");
    int choice;
    scanf("%d",&choice);
    if(choice==6){
        return 0;
    }
    int n;
    printf("enter the size of array ");
    scanf("%d",&n);
    int *arr=(int*)malloc(100*sizeof(int));
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
            update(arr,&n);
            break;
        case 4:
            search(arr,&n);
            break;
        case 5:
        traverse(arr,&n);
        break;
        default:
            printf("Invalid choice");
    }
    free(arr);
    return 0;
}
