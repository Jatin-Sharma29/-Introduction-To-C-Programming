#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    int max = a, max2 = 0;
    if (b > max)
    {
        max2 = max;
        max = b;
    }
    else
    {
        max2 = b;
    }
    if (c > max)
    {
        max2 = max;
        max = c;
    }
    else if (c > max2)
    {
        max2 = c;
    }
    printf("%d\n", max2);
    return 0;
}