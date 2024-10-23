#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("Number of digit in %d is %d",temp,count);
    return 0;
}