#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    float y;
    double z;
    char c;
  
    printf("input the value of integer = ");
    scanf("%d",&x);
    printf("input the value of float = ");
    scanf("%f",&y);
    printf("input the value of double =");
    scanf("%lf",&z);
    printf("input the value of char = ");
    scanf("%c",&c);
    printf("x=%d",x);
    printf("y=%f",y);
    printf("z=%lf",z);
    printf("c=%c",c);
    return 0;
}
