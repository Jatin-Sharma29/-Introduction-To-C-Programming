#include <stdio.h>
int main()
{
    int n, i, j, target;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for (i = 0; i < n;)
    {
        if (arr[i] == target)
        {
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
        }
        else
            i++;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}