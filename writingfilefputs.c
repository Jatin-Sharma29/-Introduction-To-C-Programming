#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp=fopen("data.txt","a");
    if(fp==NULL){
        printf("File not found");
        exit(0);
    }
    char str[100];
    printf("Enter string:");
    scanf("%[^\n]*c",str);
    strcat(str,"\n");
    fputs(str,fp);
    fclose(fp);
    return 0;
}