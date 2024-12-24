#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter size of string:");
    scanf("%d",&n);
    char str[n];
    printf("enter string:");
    scanf("\n%[^\n]*c",str);
    for(int i=strlen(str)-1;i>=0;i--){
        printf("%c ",str[i]);
    }
    return 0;
}