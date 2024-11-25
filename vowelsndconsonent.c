#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    system("cls");
    char str[30];
    int c=0,v=0;
    printf("enter string:");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
            v++;
        else
            c++;
    }
    printf("total vowels=%d",v);
    printf("\ntotal consonent=%d",c);
    return 0;
}