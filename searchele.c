#include<stdio.h>
int main(){
    int n,e,i;
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
     for(i=0;i<n;i++)
     if(marks[i]==e)
     {
        printf("%d",e);
     }
    return 0;
}