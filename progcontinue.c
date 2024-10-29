#include<stdio.h>
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%5==0 && i%7==0)
       continue;
        printf("%d ",i);
    }
    return 0;
}