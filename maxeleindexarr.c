#include<stdio.h>
int main(){
    int n,largest=0,i,index=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int marks[n];
    printf("Enter %d elements :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
        if(largest<marks[i])
        {
            largest=marks[i];
            index=i;   
        }
    }
    printf("largest element of array is %d\n",largest);
    printf("Index of largest element of array is %d",index);
    return 0;
}