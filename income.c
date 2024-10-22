#include<stdio.h>
int main(){
    int sal;
    float old_tax,new_tax;
    scanf("%d",&sal);
    // OLD TAX SLAB
    if(sal<=500000)
    {
        old_tax=0;
    }
    else if(sal>500000&&sal<=1000000)
    {
        old_tax=500000*0.05+(sal-500000)*0.20;
    }
    else
    {
        old_tax=500000*0.05+500000*0.20+(sal-1000000)*0.30;
    }
    // NEW TAX SLAB
    if(sal<=700000)
    {
        new_tax=0;
    }
    else if(sal>=500000&&sal<750000)
    {
        new_tax=250000*0.05+(sal-499999)*0.10;
    }
    else if(sal>=750000&&sal<1000000)
    {
        new_tax=250000*0.05+250000*0.10+(sal-749999)*0.15;
    }
    else if(sal>=1000000&&sal<1250000)
    {
        new_tax=250000*0.05+250000*0.10+250000*0.15+(sal-999999)*0.20;
    }
    else if(sal>=1250000&&sal<1500000)
    {
        new_tax=250000*0.05+250000*0.10+250000*0.15+250000*0.20+(sal-1249999)*0.25;
    }
    else
    new_tax=250000*0.05+250000*0.10+250000*0.15+250000*0.20+250000*0.25+(sal-1499999)*0.30;
    printf("%.2f %.2f",sal+old_tax,sal+new_tax);
    return 0;
}