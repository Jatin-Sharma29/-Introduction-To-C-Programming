#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter string");
    gets(str);
    strlwr(str);
    printf("%s",str);
    return 0;
}