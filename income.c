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
        old_tax=12500+(sal-500000)*0.20;
    }
    else if(sal>1000000)
    {
        old_tax=112500+(sal-1000000)*0.30;
    }
    // NEW TAX SLAB
    if(sal<=700000)
    {
        new_tax=0;
    }
    else if(sal>500000&&sal<=750000)
    {
        new_tax=12500+(sal-500000)*0.10;
    }
    else if(sal>750000&&sal<=1000000)
    {
        new_tax=37500+(sal-750000)*0.15;
    }
    else if(sal>1000000&&sal<=1250000)
    {
        new_tax=75000+(sal-100000)*0.20;
    }
    else if(sal>1250000&&sal<=1500000)
    {
        new_tax=125000+(sal-1250000)*0.25;
    }
    else if(sal>1500000)
    new_tax=187500+(sal-1500000)*0.30;
    printf("%.2f %.2f",old_tax,new_tax);
    return 0;
}
