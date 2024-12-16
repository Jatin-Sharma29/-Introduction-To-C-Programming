#include<stdio.h>
int main(){
    FILE *fp=fopen("data.txt","r");
    if(fp!=NULL){
        printf("file opened");
    }
    else
    printf("File not found");
    fclose(fp);
    return 0;
}