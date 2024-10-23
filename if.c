//wap to read number from user and if number is positive print the cube of number
#include<stdio.h>
int main(){
    int num,cube;
    printf("Enter the number =");
    scanf("%d",&num);
    if(num>0)
    {
        cube=num*num*num;
        printf("cube=%d",cube);
    }
    return 0;
}