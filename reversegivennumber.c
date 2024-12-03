#include <stdio.h>

int main() {
    int n, reverse = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    printf("Reverse of given number is: %d", reverse);
    return 0;
}