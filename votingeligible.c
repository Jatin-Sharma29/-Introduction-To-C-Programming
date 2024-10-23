#include<stdio.h>
int main(){
    int age;
    printf("Enter the age=");
    scanf("%d",&age);
    if(age>=18)
    printf("Eligible for voting");
    else
    printf("Not Eligible for voting");
    return 0;
}