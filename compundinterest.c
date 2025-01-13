#include<stdio.h>
#include<math.h>
int main(){
    float principal,rate,time,amnt;
    printf("Enter the principal amount: ");
    scanf("%f",&principal);
    printf("Enter the rate of interest: ");
    scanf("%f",&rate);
    printf("Enter the time period: ");
    scanf("%f",&time);
    amnt=principal*pow((1+rate/100),time);
    printf("The compound interest is %f",amnt-principal);
    return 0;
}