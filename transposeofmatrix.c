#include<stdio.h>
int main(){
    int n,m,sub;
    printf("enter the size of rows and columns of two matrix=");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    printf("Enter first matrix\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        scanf("%d",&arr[i][j]);
    }
    printf("Transpose of matrix is\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
            printf(" %d",arr[j][i]);
        }
        printf("\n");
    }
}