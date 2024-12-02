#include<stdio.h>
void fibonacci(int trm){
    static int a=0,b=1;
    if(trm!=0){
    fibonacci(trm-1);
    printf("%d ",a);
    int c=a+b;
    a=b;
    b=c;
    }
}
int main(){
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}