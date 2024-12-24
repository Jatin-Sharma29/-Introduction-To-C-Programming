#include<stdio.h>
#include<string.h>
int main(){
    int j=0;
    char str[100],temp[100];
    scanf("%[^\n]*c",str);
    for(int i=strlen(str)-1;i>=0;i--){
        temp[j++]=str[i];
    }
    temp[j]='\0';
    if(strcmp(temp,str)==0){
        printf("Palindrome");
    }
    else
    printf("Not Palindrome");
    
   
    return 0;
}