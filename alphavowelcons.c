#include<stdio.h>
int main(){
    char alph;
    printf("Enter the value of alphabet=");
    scanf("%c",&alph);
    if(alph=='a'||alph=='e'||alph=='i'||alph=='o'||alph=='u'||alph=='A'||alph=='E'||alph=='I'||alph=='O'||alph=='U')
    printf("Alphabet is Vowel");
    else
    printf("Alphabet is Consonant");
    return 0;
    
}