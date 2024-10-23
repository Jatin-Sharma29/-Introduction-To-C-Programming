#include<stdio.h>
#include<math.h>
int main(){
    int n,digits;
    printf("Enter a number:");
    scanf("%d",&n);
    digits=(int)log10(n)+1;
    printf("Number of digit in %d is %d",n,digits);
    return 0;
}