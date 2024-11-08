#include<stdio.h>
int main(){
int dig;
printf("Enter a digit:");
scanf("%d",&dig);
if(dig>=0 && dig<=9)
printf("Given number is single digit");
else if (dig>=10 && dig<=99)
{
printf("Given number is two digit");
}
else if (dig>=100 && dig<=999)
{
printf("Given number is three digit");
}
else
printf("Given number is more than three digits");    
return 0;
}