#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements :",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    // logic of insertion sort(Ascending order)
    for( i=1;i<n;i++){ // we need to have min two numbers for sorting thats why i=1
        int val=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>val)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=val;
    }
    printf("After sorting elements are;\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
