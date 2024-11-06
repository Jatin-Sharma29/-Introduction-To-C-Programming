#include<stdio.h>
int main(){
    int n,sum=0,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int marks[n];
    printf("Enter %d elements :",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
        sum=sum+marks[i];  
    }
    printf("sum of array elements are =%d",sum);    
    return 0;
}