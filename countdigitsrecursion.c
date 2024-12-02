#include <stdio.h>
int digcount(int n)
{
    static int count=0;
    if (n==0){
        return 1;
    }
    else{
    digcount(n/10);
    count++;
}
return count;
}
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d", &num);
    int ans = digcount(num);
    printf("number of digits=%d",ans);
    return 0;
}