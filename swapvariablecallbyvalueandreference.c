#include<stdio.h>
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
  printf("After swapping a =%d\n",a);
  printf("After swapping b =%d\n",b);
}

void swap1(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
  printf("After swapping a =%d\n",*a);
  printf("After swapping b =%d\n",*b);
}
int main(){
    int x,y;
    printf("Enter two Numbers:");
    scanf("%d%d",&x,&y);
    printf("Swapping variable using call by value\n");
    swap(x,y);
    printf("Swapping variable using call by reference\n");
    swap1(&x,&y);
    return 0;
}