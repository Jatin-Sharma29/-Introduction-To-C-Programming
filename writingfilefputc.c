#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=fopen("data.txt","a");
    if(fp==NULL){
        printf("file not found");
        exit(0);                      
    }
    char ch;
    int n;
    printf("Enter no of char:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter character:");
    scanf("\n%c",&ch);
    fputc(ch,fp);
    }
    printf("Data written in file sucessfully");
    fclose(fp);
    return 0;
}