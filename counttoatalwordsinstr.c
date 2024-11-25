#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int count = 0;
    int Word = 0;
    int i = 0;

    while (str[i]) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            Word= 0;
        } else if (Word == 0) {
            Word = 1;
            count++;
        }
        i++;
    }

    printf("Number of words: %d\n", count);

    return 0;
}                                       
