#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the value of Number =");
    scanf("%d",&n);
    sum+=n%10;
    n=n/10;
    sum+=n%10;
    n=n/10;
    sum+=n%10;
    n=n/10;
    sum+=n%10;
    n=n/10;
    sum+=n%10;
    n=n/10;
    printf("sum of digits =%d",sum);
    return 0;
}