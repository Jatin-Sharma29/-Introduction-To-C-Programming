#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char str[100],target;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the target character: ");
    scanf("%c",&target);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==target){
            printf("Found %c at index %d\n",target,i);
        }
    }
    return 0;
}