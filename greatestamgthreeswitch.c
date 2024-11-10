#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers=");
    scanf("%d%d%d",&a,&b,&c);
    switch (a>b)
    {
    case 1:
        switch (a>c)
        {
        case 1:
            printf("The largest number is %d",a);
            break;
        
        case 0:
        printf("The largest number is %d",c);
            break;
        }
        break;
        case 0:
        switch (b>c)
        {
        case 1:
            printf("The largest number is %d",b);
            break;
        case 0:
        printf("The largest number is %d",c);
            break;
        }
        break;
    }
return 0;
}