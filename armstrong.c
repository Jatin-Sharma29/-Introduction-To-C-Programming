#include<stdio.h>
#include<math.h>
int main() {
    int n, rem, sum = 0, temp1, count = 0, temp2;
    printf("Enter number: ");
    scanf("%d", &n);

    temp1 = n;
    // Count the number of digits
    while (temp1 != 0) {
        temp1 = temp1 / 10;
        count++;
    }

    temp2 = n;
    // Check if the number is Armstrong
    while (n != 0) {
        rem = n % 10;
        sum += (int)pow(rem, count); 
        n = n / 10;
    }

    if (sum == temp2)
        printf("%d is an Armstrong number.\n", temp2);
    else
        printf("%d is not an Armstrong number.\n", temp2);

    return 0;
}
