#include<stdio.h>
#include<math.h>
int main(){
    int n,fd,ld,dig;
    printf("Enter a number:");
    scanf("%d",&n);
    ld=n%10;
    dig=(int)log10(n);
    fd=n/pow(10,dig);
    printf("sum of first and last digit is %d",fd+ld);
    return 0;
}