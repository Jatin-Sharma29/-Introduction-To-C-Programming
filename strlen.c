#include<stdio.h>
#include<string.h>
int main(){
    char pass[20];
    printf("Enter Password");
    gets(pass);
    int len= strlen(pass);
    printf("Length of password string is= %s",pass);
    return 0;
}