#include<stdio.h>
int main(){
    int n,largest=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int marks[n];
    printf("Enter %d elements :",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
        if(largest<marks[i])
        {
            largest=marks[i];   
        }
    }
    printf("%d",largest);
    return 0;
}