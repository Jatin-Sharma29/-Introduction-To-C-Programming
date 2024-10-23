#include<stdio.h>
int main(){
    int l,b,s,area,choice;
    float r,areac;
    printf("For area of circle press 1\n");
    printf("For area of rectangle press 2\n");
    printf("For area of square press 3\n");
    printf("Enter your Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter the value of radius=");
        scanf("%f",&r);
        areac=3.14*r*r;
        printf("Area Of Circle=%.2f",areac);
        break;
        case 2:
        printf("Enter the value of length and breadth=");
        scanf("%d %d",&l,&b);
        area=l*b;
        printf("Area Of Rectangle=%d",area);
        break;
        case 3:
        printf("Enter the value of Side=");
        scanf("%d",&s);
        area=s*s;
        printf("Area of Square=%d",area);
        break;
        default:
        printf("Enter a valid choice");

    }
    return 0;
}