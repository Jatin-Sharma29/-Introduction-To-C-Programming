// non prime number is fully divisible by numbers <=to the half of the given number.
#include<stdio.h>
int main(){
    int n,i=2,flag=0;
    printf("Enter number :");
    scanf("%d",&n);
    while (i<=n/2)
    {
        if(n%i==0)
         { flag=1;
          break;}
          i++;
    }
    if(flag==0)
    printf("Number is Prime");
    else
    printf("Number is not prime");
    return 0;
}