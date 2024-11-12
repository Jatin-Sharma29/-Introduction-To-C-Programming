#include<stdio.h>
int main(){
    int n,m,sum;
    printf("enter the size of rows and columns of two matrix=");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    int arr1[n][m];
    printf("Enter first matrix\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        scanf("%d",&arr[i][j]);
    }
    printf("Enter Second matrix\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        scanf("%d",&arr1[i][j]);
    }
    printf("Sum of two matrix=\n");
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=arr[i][j]+arr1[i][j];
            printf("%d ",sum);
        }
        printf("\n");  
    }
    return 0;
    }
// for storing sum of matrix in another matrix we do it like this: result[i][j]=arr[i][j]+arr1[i][j].
