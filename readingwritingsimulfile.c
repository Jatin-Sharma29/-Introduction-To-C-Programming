#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp=fopen("data.txt","a+");
    if(fp==NULL){
        printf("File not found");
        exit(0);
    }
    char str[100];
    printf("Enter string:");
    scanf("%[^\n]*c",str);
    strcat(str,"\n");
    fputs(str,fp);
    // reading data from the file
    rewind(fp);
    char ch;
    while(ch!=EOF){
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}