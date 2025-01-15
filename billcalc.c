#include<stdio.h>

int main(){
    int ID;
    float n, amnt;
    scanf("%d", &ID);
    scanf("%f", &n);
    if(n <= 199) {
        amnt=n*1.20;
        if(amnt<100){
            amnt=100;
            printf("%d %.2f",ID,amnt);
        }else{
        printf("%d %.2f", ID,amnt);
        }
    } else if (n >= 200 && n < 400) {
        amnt = 199*1.20+(n-199)*1.50;
        if(amnt > 400) {
            printf("%d %.2f", ID, amnt + 0.15 * amnt);
        } else {
            printf("%d %.2f", ID, amnt);
        }
    } else if (n>=400 &&n<600)
    {
        amnt=199*1.20+200*1.50+(n-399)*1.80;
            printf("%d %.2f", ID, amnt + 0.15 * amnt);
    }
    else 
    {
        amnt=199*1.20+200*1.50+200*1.80+(n-599)*2.00;
        printf("%d %.2f",ID,amnt+0.15*amnt);

    }
    return 0;
}
