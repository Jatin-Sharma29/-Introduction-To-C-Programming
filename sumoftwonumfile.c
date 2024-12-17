#include<stdio.h>
#include<stdlib.h>
int main(){
      FILE *fp=fopen("data.txt","a+");
    if(fp==NULL){
        printf("File not found");
        exit(0);
    }
    int x,y,sum;
    fscanf(fp,"%d %d",&x,&y);
    sum=x+y;
    fprintf(fp,"\nsum of %d and %d is %d",x,y,sum);
    fclose(fp);
    return 0;
}