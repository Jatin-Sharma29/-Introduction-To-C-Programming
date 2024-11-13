#include<stdio.h>
#include<string.h>
int main(){
    system("cls");
    char str[100];
    int alph=0,dig=0,symbol=0;
    printf("Enter string=");
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>=65 && str[i]<=90|| str[i]>=97 && str[i]<=122) {
            alph++;
        }
        else if(str[i]>=48 && str[i]<=57){
            dig++;
        }
        else
        symbol++;
    }
    printf("number alphabets in given string=%d\n",alph);
    printf("number digit in given string=%d\n",dig);
    printf("number symbol in given string=%d\n",symbol);
    return 0;
}