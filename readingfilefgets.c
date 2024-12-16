// program to read data from the file line by line  || string by string
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=fopen("data.txt","r");
    if(fp==NULL){
        printf("file not found");
        exit(0);                      
    }
    char ch[100];
    while(!feof(fp)){
    fgets(ch,100,fp);
    printf("%s",ch);
    }
    fclose(fp);
    return 0;
}