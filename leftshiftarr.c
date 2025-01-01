#include <stdio.h>
int main()
{
    int n, temp, i;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements :", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    temp = arr[0];
    for (i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n-1] = temp;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}