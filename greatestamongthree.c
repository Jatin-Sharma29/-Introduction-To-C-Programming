#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers =");
    scanf("%d%d%d",&a,&b,&c);
    (a>b && a>c)? printf("a is greatest"): (b>c) ? printf("b is largest") : printf("c is largest");
    return 0;
}