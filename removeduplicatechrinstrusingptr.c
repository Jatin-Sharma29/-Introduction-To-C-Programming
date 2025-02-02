#include<stdio.h>
#include<stdlib.h>
int main(){
    char *str=(char*)malloc(100*sizeof(char));
    printf("enter the string\n");
    scanf("%s",str);
    for(int i=0;*(str+i)!='\0';i++){
        for(int j=i+1;*(str+j)!='\0';j++){
            if(*(str+i)==*(str+j)){
                for(int k=j;*(str+k)!='\0';k++){
                    *(str+k)=*(str+k+1);
                }
                j--;
            }
        }
    }
    printf("String after removing duplicates is\n");
    printf("%s",str);
    free(str);
    return 0;
}