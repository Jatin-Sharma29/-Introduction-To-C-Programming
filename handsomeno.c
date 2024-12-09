#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int ld=n%10;
    int temp;
    temp=n/10;
    while(temp!=0){
        sum+=temp%10;
        temp=temp/10;
    }
   if(sum==ld){
    printf("Yes");
   }
   else
   printf("No");
    return 0;
}