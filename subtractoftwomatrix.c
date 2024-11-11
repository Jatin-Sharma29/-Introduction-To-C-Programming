#include<stdio.h>
int main(){
    int n,m,sub;
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
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sub=arr[i][j]-arr1[i][j];
             printf("subtraction=%d\n",sub);
        }
       
    }
}