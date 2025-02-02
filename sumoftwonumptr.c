#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a=(int*)malloc(sizeof(int));
    int *b=(int*)malloc(sizeof(int));
    printf("enter the value of a and b\n");
    scanf("%d %d", a, b);
    int sum = *a + *b;
    printf("sum of a and b is %d",sum);
    free(a);
    free(b);
    return 0;
}