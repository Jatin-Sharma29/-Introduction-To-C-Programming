#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int marks[n],marks2[n];
    printf("Enter %d elements :",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
        marks2[i]=marks[i];
    }
    for (int i = 0; i <n; i++)
    {
        printf("%d ",marks[i]); 
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",marks2[i]);
    }
    return 0;
}