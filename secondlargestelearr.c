#include<stdio.h>
int main(){
    int n,i;
    int max1,max2=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements :",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    // logic to find 2nd largest element 
    max1=arr[0];
    for( i=1;i<n;i++){
    if(arr[i]>max1)
    {
        max2=max1;
        max1=arr[i];
    }
    else if(arr[i]>max2 && arr[i]<max1)
    max2=arr[i];
    }
    printf("2nd largest element is %d",max2);
    return 0;
}