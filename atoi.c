#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[20];
    printf("Enter string");
    gets(str);
    int x= atoi(str);
    printf("%d",x);
    return 0;
}