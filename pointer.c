// changing value of variable indirectly
#include<stdio.h>
int main(){
    int x=67;
    int *ptr=&x;
    *ptr=90;
    printf("%d\n",ptr); // it gives the address of variable
    printf("%d\n",&ptr); // it gives the address of pointer
    printf("%d\n",*ptr); // printf("%d",*ptr)==printf("%d",*&x)
    printf("%d\n",*&ptr); // &ptr(get solved first)this gives the adress of ptr and * gives the value of ptr which is == to the address of variable(because pointer stores the address of variable)
    printf("%d\n",&(*ptr));// it gives address of x
    printf("%d",*&x);// it gives the value of x
    return 0;
}