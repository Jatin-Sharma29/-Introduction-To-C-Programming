#include<stdio.h>
int main(){
    int DA, HRA, basic;
    float gross;
    scanf("%d",&basic);
    if(basic<=2000){
        DA=0.1*basic;
        HRA=0.2*basic;
    }
    else if(basic>2000 && basic<=5000){
        DA=0.2*basic;
        HRA=0.3*basic;
    }
    else if(basic>5000 && basic<=10000){
        DA=0.3*basic;
        HRA=0.4*basic;
    }
    else{
        DA=0.5*basic;
        HRA=0.5*basic;
    }
    gross=basic+DA+HRA;
    printf("%.2f",gross);
    return 0;
}