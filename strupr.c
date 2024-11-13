#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter string");
    gets(str);
    strupr(str);
    printf("%s",str);
    return 0;
}