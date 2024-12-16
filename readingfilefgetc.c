// program to read data from the file character by character
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=fopen("data.txt","r");
    if(fp==NULL){
        printf("file not found");
        exit(0);                      // terminates the program
    }
    char ch;
    while(ch!=EOF){
    ch=fgetc(fp);
    printf("%c",ch);
    }
    fclose(fp);
    return 0;
}