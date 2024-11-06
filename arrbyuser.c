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
    for (int i = 0; i <n; i++)
    {
        printf("%d ",marks[i]);
    }
    return 0;
}
// we can only declare array and can't initialize it when we are taking size from user
// size of global array is fixed