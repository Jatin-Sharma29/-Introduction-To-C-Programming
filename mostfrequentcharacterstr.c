#include<stdio.h>
int main(){
    char str[100];
    gets(str);
    int freq[256] = {0};
    int max = 0;
    char result;
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            result = str[i];
        }
    }
     printf("Most frequent character: %c\n", result);
     return 0;
}