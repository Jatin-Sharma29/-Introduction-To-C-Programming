#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int marks[n],even=0,odd=0;
    printf("Enter %d elements :",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
        if(marks[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("Number of even elements are =%d\n ",even);
    printf("Number of odd elements are =%d ",odd);
    return 0;
}