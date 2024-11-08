#include<stdio.h>
int main(){
int a,b,c,x;
printf("Enter 1 to Find greatest number among three:");
scanf("%d",&x);
switch(x)
{
case 1:
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("%d is greatest",a);
else if(b>c)
printf("%d is greatest",b);
else
printf("%d is greatest",c);
break;
default:
printf("Invalid number");    
}
return 0;
}