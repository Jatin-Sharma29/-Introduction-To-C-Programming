#include<stdio.h>
int main() 
{
    int a,b,temp;
    scanf("%d%d", &a, &b);
  	for(a;a<=b;a++){
        temp=a;
        if(temp>=1 && temp<=9){
        switch (temp)
        {
        case 1:
            printf("one\n");
            break;
            case 2:
            printf("two\n");
            break;
            case 3:
            printf("three\n");
            break;
            case 4:
            printf("four\n");
            break;
            case 5:
            printf("five\n");
            break;
            case 6:
            printf("six\n");
            break;
            case 7:
            printf("seven\n");
            break;
            case 8:
            printf("eight\n");
            break;
            case 9:
            printf("nine\n");
            break;
        }
    }
    else if(temp>9 && temp%2==0)
    printf("even\n");
    else
    printf("odd\n");
    }
    return 0;
}
