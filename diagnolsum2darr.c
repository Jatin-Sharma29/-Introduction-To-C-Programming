#include<stdio.h>
int main(){
    int n,m,sum=0;
    printf("Enter the size of rows and columns=");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        scanf("%d",&arr[i][j]);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i][i];
    }
    printf("sum of right diagnol is =%d",sum);
}