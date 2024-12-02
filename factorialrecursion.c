#include <stdio.h>
int factorial(int n){
    static int fact;
    if(n==0||n==1){
        return 1;
    }
    else
        return n*factorial(n-1);
}
int main() {
    int num;
    printf("enter nmber you want the factorial of");
    scanf("%d",&num);
    int fc=factorial(num);
    printf("%d",fc);
    return 0;
}