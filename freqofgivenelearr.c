#include <stdio.h>
int main()
{
    int n, target, i, count = 0;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter target element:");
    scanf("%d", &target);
    int arr[n];
    printf("Enter %d elements :", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == target)
        {
            count++;
        }
    }
    printf("Frequency of %d is %d", target, count);
    return 0;
}