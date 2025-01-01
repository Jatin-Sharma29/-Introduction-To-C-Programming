#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    int freq[256] = {0};
    int max1=0,max2=0;
    char mostfreqchr='\0',secondmostfreqchr='\0';
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq[i]>max1){
            max2=max1;
            secondmostfreqchr=mostfreqchr;
            max1=freq[i];
            mostfreqchr=i;
        } else if (freq[i]>max2 && freq[i]<max1){
            max2=freq[i];
            secondmostfreqchr=i;
        }
    }
    if(secondmostfreqchr!='\0'){
        printf("%c",secondmostfreqchr);
    }
    else
    printf("NO");
     return 0;
}