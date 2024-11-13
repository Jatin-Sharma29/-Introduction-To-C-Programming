#include<stdio.h>
#include<string.h>
int main(){
    char str[100],i;
    printf("Enter string=");
    gets(str);
    for( i=0;i<strlen(str);i++){
        if(str[i]>=65 && str[i]<=90)
        str[i]+=32;
        else if(str[i]>=97 && str[i]<=122)
        str[i]-=32;
    }
    printf("toggle char=%s",str);
    return 0;
}    