#include<stdio.h>
#include<string.h>
int main(){
    char str1[45],str[45];
    printf("Enter string 1");
    gets(str1);
    printf("Enter string 2");
    gets(str);
    int cmp= strcmp(str1,str);
    printf("%d",cmp);
    return 0;
}