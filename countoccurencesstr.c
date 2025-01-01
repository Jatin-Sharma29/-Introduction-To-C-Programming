#include<stdio.h>
#include<string.h>
int main(){
    int count=0;
    char str[100],target;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the target character: ");
    scanf("%c",&target);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==target){
            count++;
        }
    }
    printf("The occurence of %c is %d times",target,count);
    return 0;
}