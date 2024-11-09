#include<stdio.h>
int main(){
    int n,e,i,flag=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int marks[n];
    printf("Enter %d elements :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("Enter element you want to search=");
     scanf("%d",&e);
    // logic linear search
     for(i=0;i<n;i++)
         if(marks[i]==e){
             flag=1;
             break;
         }
    if(flag==1)
        printf("Element found at %d position",i);
    else
        printf("Element not found");
     
    return 0;
}
