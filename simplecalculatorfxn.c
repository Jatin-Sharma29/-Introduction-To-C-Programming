#include<stdio.h>
int addittion(int a,int b){
    return a+b;
}
int subtraction(int a,int b){
    return a-b;
}
int multiplication(int a,int b){
    return a*b;
}
int division(int a,int b){
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a/b;
}
int main(){
    int x,y;
    char choice;
    printf("Enter + for addittion\nEnter - for subtraction\nEnter * for multiplication\nEnter / for division\n");
    printf("Enter your choice:");
    scanf("%c",&choice);
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    switch (choice)
    {
    case '+':
        printf("Addittion of %d and %d is %d",x,y,addittion(x,y));    
        break;
    case '-':
        printf("Subtraction of %d and %d is %d",x,y,subtraction(x,y));    
        break;
    case '*':
        printf("Multiplication of %d and %d is %d",x,y,multiplication(x,y));    
        break;
    case '/':  
        printf("Division of %d and %d is %d",x,y,division(x,y));    
        break;
    default:
        printf("Invalid choice");
        break;
    }
    return 0;
}