#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    // Using malloc
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Memory allocated using malloc\n");
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Freeing the memory allocated by malloc
    printf("Memory freed\n");

    // Using calloc
    arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Memory allocated using calloc\n");
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Freeing the memory allocated by calloc
    printf("Memory freed\n");

    return 0;
}