#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,distance;
    printf("enter value of x coordinate of first line =");
    scanf("%f",&x1);
    printf("enter value of y coordinate of first line =");
    scanf("%f",&y1);
    printf("enter value of x coordinate of second line =");
    scanf("%f",&x2);
    printf("enter value of y coordinate of second line =");
    scanf("%f",&y2);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("The Euclidean distance =%f",distance);
    return 0;
}