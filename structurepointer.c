#include<stdio.h>
    struct book
    {
        int id;
        char name[30];
        int price;
    };
    
int main(){
    struct book b1;
    struct book *ptr=&b1;
    printf("Enter Book ID :");
    scanf("%d",&ptr->id); // & get the address of id.
    printf("Enter Book Name :");
    scanf("\n%[^\n]*c",ptr->name); // scanset for input buffer,didn't write & because name is string and give base address.
    printf("Enter Book Price :");
    scanf("%d",&ptr->price);
    printf("Book ID : %d\n",ptr->id);
    printf("Book Name : %s\n",ptr->name);
    printf("Book Price : %d\n",ptr->price);
    return 0;
}