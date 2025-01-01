#include <stdio.h>
void removedifsymb(char *str)
{
    int i, j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("%s", str);
}
int main()
{
    char str[200];
    gets(str);
    removedifsymb(str);
    return 0;
}