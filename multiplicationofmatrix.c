#include<stdio.h>
int main(){
    int n,m,n2,m2;
    printf("enter the size of rows and columns of first matrix=");
    scanf("%d%d",&n,&m);
    printf("enter the size of rows and columns of second matrix=");
    scanf("%d%d",&n2,&m2);
    int arr[n][m];
    int arr1[n2][m2];
    printf("Enter first matrix\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        scanf("%d",&arr[i][j]);
    }
    printf("Enter Second matrix\n");
     for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++)
        scanf("%d",&arr1[i][j]);
    }
    printf("Multiplication of two matrix =\n");
    // logic for multiplication
    for(int i=0;i<n;i++){                        // for rows of first matrix
    for(int j=0;j<m2;j++){                       // for columns of second matrix
        int mul=0;                       
    for(int k=0;k<m;k++){                       // for accessing elements of matrix(k iterates to m because if matrix
        mul=mul+arr[i][k]*arr1[k][j];        //aren't square matrix and we iterates it to m2 the output will be incorrect)
    }
    printf("%d ",mul);
    }
    printf("\n");
    }
    return 0;
}