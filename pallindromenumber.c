#include <stdio.h>

int main()
{
    int n, reverse = 0, rem, temp;
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    if (temp == reverse)
        printf("true");
    else
        printf("false");
    return 0;
}