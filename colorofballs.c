#include<stdio.h>
int main(){
    int n,count=0,flag=0;
    scanf("%d",&n);
    char arr[n];
    for(int i=0;i<n;i++){
        scanf(" %c",&arr[i]);
        if(arr[i]>=97 && arr[i]<=122){
            arr[i]=arr[i]-32;
        }
    }
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count%2!=0){
            printf("%c\n",arr[i]);
            flag=1;
            break;
        }
    }
    if(flag!=1){
        printf("All balls are even\n");
    }
}