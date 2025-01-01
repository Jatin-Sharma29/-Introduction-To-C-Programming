#include <stdio.h>
int main()
{
    int n,i,j,count=0;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n];
    int frq[n];
    printf("Enter %d elements :", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        frq[i] = -1;
    }
    // logic to find frequency of each element
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                frq[j]=0;
            }
        }
    
    if(frq[i]!=0){
        frq[i]=count;
    }
    }
    for(i=0;i<n;i++){
        if(frq[i]!=0){
            printf("frequency of %d is %d\n",arr[i],frq[i]);
        }
    }
    return 0;
}