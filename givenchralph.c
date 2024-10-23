#include<stdio.h>
int main(){
    char chr;
    printf("Enter the value of character =");
    scanf("%c",&chr);
    if(chr>=65&&chr<=122)
    printf("Given character is alphabet");
    else if (chr>=48&&chr<=57)
    {
        printf("Given character is digit");
    }
    else
    printf("Given character is symbol");
    return 0;
}