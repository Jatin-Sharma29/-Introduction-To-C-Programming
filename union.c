#include<stdio.h>
#include<stdio.h>
    union book
    {
        int id;
        char name[30];
        int price;
    };
    
int main(){
    union book b1;
    printf("Enter Book ID :");
    scanf("%d",&b1.id); 
    printf("Enter Book Name :");
    scanf("\n%[^\n]*c",b1.name); 
    printf("Enter Book Price :");
    scanf("%d",&b1.price);
    printf("Book ID : %d\n",b1.id);
    printf("Book Name : %s\n",b1.name);
    printf("Book Price : %d\n",b1.price);
    return 0;
}