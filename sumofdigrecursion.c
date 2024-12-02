#include <stdio.h>
int digsum(int n)
{
    if (n == 0){
        return 0;
    }
    else
    return (n%10)+digsum(n/10);
}
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d", &num);
    int ans = digsum(num);
    printf("sum of digits=%d",ans);
    return 0;
}