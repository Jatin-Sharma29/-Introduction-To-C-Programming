#include <stdio.h>
int main()
{
    int n, target;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            printf("%d", i);
        return 0;
    }
}
for (int i = 0, j = i + 1; i < n - 1; i++, j++)
{
    if (target > arr[i] && target < arr[j])
    {
        printf("%d", j);
       return 0;
    }
}
 printf("%d", n);
    return 0;
}