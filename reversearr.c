// WAP to display array in reverse order
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int marks[n];
    printf("Enter %d elements :",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    for (int i =n-1; i>=0; i--)
    {
        printf("%d ",marks[i]);
    }
    return 0;
}