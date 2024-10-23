#include<stdio.h>
#include<math.h>
int main(){
    int n,fd,ld,dig;
    printf("Enter a number:");
    scanf("%d",&n);
    ld=n%10;
    n=n/10;
    dig=(int)log10(n);
    fd=n/pow(10,dig);  
    int rm=n%(int)pow(10,dig);
    n=ld*pow(10,dig+1)+rm*10+fd;
    printf("swap of first and last digit is %d",n);
    return 0;
}