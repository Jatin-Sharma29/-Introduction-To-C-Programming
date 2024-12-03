#include <stdio.h>
int reverse(int n){
    static int rev = 0;
    if(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        reverse(n/10);
    }
    return rev;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reverse of given number is: %d", reverse(n));
    return 0;
}