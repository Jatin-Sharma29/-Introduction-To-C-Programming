#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char str[100],target;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the target character: ");
    scanf("%c",&target);
    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]==target){
            printf("The last occurence of %c is at index %d",target,i);
            break;
        }
    }
    return 0;
}