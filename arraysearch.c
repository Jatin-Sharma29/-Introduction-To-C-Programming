#include<stdio.h>
int main(){
    int n,target;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]== target){
            printf("%d",i);
        return 0;
    }
}
printf("-1");
    
    return 0;
}