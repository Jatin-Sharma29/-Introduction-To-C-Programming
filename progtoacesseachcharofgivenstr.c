#include<stdio.h>
#include<string.h>
int main(){
    system("cls");
    char str[50];
    printf("Enter string");
    gets(str);
    for(int i=0;i<strlen(str);i++){
        printf("%c ",str[i]);
    }
    return 0;
}