#include<stdio.h>
int main(){
    float farenheit,temp_celcius;
    printf("Enter the value of Farenheit");
    scanf("%f",&farenheit);
    temp_celcius=(farenheit-32)*5/9;
    printf("Temperature in celcius = %.2f",temp_celcius);
    return 0;
}