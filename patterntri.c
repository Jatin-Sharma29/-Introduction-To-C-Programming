#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++) // outer loop is for rows in the triangle(triangle in matrix).
    {
        for(int j=1;j<=i;j++)
        {
        printf("* ");
        }
        printf("\n");
    }
    return 0;
}