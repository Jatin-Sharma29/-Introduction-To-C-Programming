#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the size of array\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("enter array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + i) == *(arr + j))
            {
                for (int k = j; k < n - 1; k++)
                {
                    *(arr + k) = *(arr + k + 1);
                }
                n--;
                j--;
            }
        }
    }
    printf("Array after removing duplicates is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    free(arr);
    return 0;
}