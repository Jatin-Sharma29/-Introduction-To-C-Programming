#include<stdio.h>
int main(){
    int millisec,hours,minutes,seconds;
    printf("Enter the value of Milliseconds = ");
    scanf("%d",&millisec);
    hours=millisec/3600000;
    minutes=(millisec%3600000)/60000;
    seconds=(millisec%60000)/1000;
    printf("Hours =%d\n Minutes=%d\n Seconds=%d",hours,minutes,seconds);
    return 0;
}