#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of two numbers =");
    scanf("%d%d",&a,&b);
    (a>b)? printf("a is greatest") : printf("b is greatest");
    return 0;
}