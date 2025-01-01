#include <stdio.h>

int main()
{
    int n, i, ind, val;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d elements:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index where you want to insert the element:");
    scanf("%d", &ind);
    printf("Enter the value you want to insert:");
    scanf("%d", &val);
    for (i = n - 1; i >= ind; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[ind] = val;
    printf("Array after inserting the element is:\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}