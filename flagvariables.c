#include<stdio.h>
int main(){
    int n,x=0;
    printf("Enter number :");
    scanf("%d",&n);
    for(int i=1,i<=n,i++)
    {
        if(i%5==0&&i%7==0)
        {
            x=1;
            break;
        }
    }   printf("%d",i);
    return 0;
}
// here  xis a flag variable it is used to tell if program is terminated by break or by false condition of loop