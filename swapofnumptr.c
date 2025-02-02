#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a=(int*)malloc(sizeof(int));
    int *b=(int*)malloc(sizeof(int));
    printf("enter the value of a and b\n");
    scanf("%d %d", a, b);
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("after swapping\n");
    printf("a=%d b=%d",*a,*b);
    free(a);
    free(b);
    return 0;
}