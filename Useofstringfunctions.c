#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int len;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    // String concatenation
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    // String length
    len = strlen(str1);
    printf("Length of concatenated string: %d\n", len);
    // String copy
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);
    // String comparison
    int cmp=strcmp(str1, str2); 
        printf("Comparison of two strings: %d\n", cmp);
    // String conversion to lower case
    strlwr(str1);   
    printf("Lower case string: %s\n", str1);
    // String conversion to upper case
    strupr(str1);
    printf("Upper case string: %s\n", str1);
    // String reverse
    strrev(str1);
    printf("Reversed string: %s\n", str1);
    return 0;
}