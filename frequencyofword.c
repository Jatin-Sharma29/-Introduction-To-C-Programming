#include<stdio.h>
#include<string.h>
int main(){
    char str[100],word[100];
    int i=0,j,count=0;
    gets(str);
    gets(word);
    while(i<strlen(str)){
        if(str[i]==word[0]){
            for(j=0;j<strlen(word);j++){
                if(str[i+j]!=word[j]){
                    break;
                }
            }
            if(j==strlen(word)){
                count++;
                i=i+j;
            }
            else{
                i++;
            }
        }
        else{
            i++;
        }
    }
    printf("%d",count);
    return 0;
}