#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=fopen("data.txt","a+");
    if(fp==NULL){
        printf("File not found");
        exit(0);
    }
    printf("cursor current position=%d\n",ftell(fp));
    fseek(fp,-20,SEEK_END);
    printf("cursor current position=%d\n",ftell(fp)); 
    char ch;
    while(ch!=EOF){
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}