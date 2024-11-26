//func with no argument but return type
#include<stdio.h>
void msg(void);          
int main()
{
    int si=getSimpleInterest();
    printf("simple interest = %d",si);            
    return 0;
}
int getSimpleInterest(void)
{
    int p,r,t;
    printf("Enter p,r,t:");
    scanf("%d%d%d",&p,&r,&t);
    return (p*r*t)/100;
}
