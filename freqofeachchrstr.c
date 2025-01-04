/* #include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int freq[256]={0};
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            printf("frequency of %c = %d\n",i,freq[i]);
        }
    }
    return 0;
}*/
 // alternative way to do this is:
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int freq;
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='\0'){
            continue;
        }
        freq=1;
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                freq++;
                str[j]='\0';
            }
        }
    
    if(str[i]!='\0'){
        printf("frequency of %c = %d\n",str[i],freq);
    }
    }
    return 0;
}