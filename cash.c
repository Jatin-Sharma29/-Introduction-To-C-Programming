#include<stdio.h>
int main(){
    int x;
    float y;
    scanf("%d %f",&x,&y);
    if(x<=y)
    {
        printf("%.2f",(y-x)-0.50);
    }
    else
    printf("%.2f",y);
    return 0;
}