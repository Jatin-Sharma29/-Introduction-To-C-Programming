#include<stdio.h>
#include<string.h>
int main(){
    int i=0,j=0,k=0,m=0;
    char str[100],find[100],replace[100],newstr[200];
    gets(str);
    gets(find);
    gets(replace);
    
    while(i < strlen(str)){
        if(str[i]==find[0]){
            for(j=0;j<strlen(find);j++){
                if(str[i+j]!=find[j]){
                    break;
                }
            }
            if(j==strlen(find)){
                for(k=0;k<strlen(replace);k++,m++){
                    newstr[m]=replace[k];
                }
                i=i+j;
            }
            else{
                newstr[m++]=str[i++];
            }
        }
        else{
            newstr[m++]=str[i++];
        }
    }
    newstr[m]='\0';
    printf("%s",newstr);
    return 0;
}