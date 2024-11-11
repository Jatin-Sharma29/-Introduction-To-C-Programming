#include<stdio.h>
int main(){
    int n,m,i,j;
    printf("Enter no of rows and columns=");
    scanf("%d%d",&n,&m);
    int marks[n][m];
    printf("Enter 2d array elements=");
    for( i=0;i<n;i++)
    {
        for( j=0;j<m;j++){
            scanf("%d",&marks[i][j]);
        }
    }
    // logic row sum
    for( i=0;i<n;i++){
        int sum=0;
        for (int j = 0; j<m ;j++)
        {
            sum+=marks[i][j];
        }
        printf("sum of %d row =%d\n",i+1,sum);
    }
    // logic sum cloumns
    for ( i = 0; i <m; i++)
    {
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=marks[j][i];
        }
        printf("sum of %d col=%d\n",i+1,sum);
    }
    
    return 0;
}
