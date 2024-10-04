#include<stdio.h>
int main(){
    int days,years,month,remaining_days;
    printf("Enter the number of days = ");
    scanf("%d",&days);
    years=days/365;
    remaining_days=days%365;
    month=remaining_days/30;
    days=remaining_days%30;
    printf("years =%d\n months=%d\n days=%d",years,month,days);
    return 0;
}