#include <stdio.h>
#include<limits.h>
int main() {
    int n,num,max=INT_MIN;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the number: ");
        scanf("%d",&num);
        if(num>max){
            max=num;
        }
    }
    printf("The maximum number is: %d",max);    
    return 0;
}