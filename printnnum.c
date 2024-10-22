#include<stdio.h>
int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=1)
    {
        printf("%d",i);
    }
    return 0;
}