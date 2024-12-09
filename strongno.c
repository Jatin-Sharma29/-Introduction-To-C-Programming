#include<stdio.h>
int main(){
    int n,sum=0,fact=1,rem;
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        rem=n%10;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        fact=1;
        n=n/10;
    }
     if(sum==temp){
            printf("1");
        }
        else{
            printf("0");
        }
    return 0;
}