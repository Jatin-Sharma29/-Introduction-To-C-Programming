#include<stdio.h>
int main(){
    int n,m,sum=0;
    printf("Enter no of rows and columns=");
    scanf("%d%d",&n,&m);
    int marks[n][m];
    printf("Enter 2d array elements=");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            scanf("%d",&marks[i][j]);
            sum+=marks[i][j];
        }
    }
    printf("sum=%d",sum);
    return 0;
}
