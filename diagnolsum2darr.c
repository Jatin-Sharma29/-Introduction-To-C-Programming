#include<stdio.h>
int main(){
    int n,m,sum=0,sum1=0;
    printf("Enter the size of rows and columns=");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        scanf("%d",&arr[i][j]);
    } for(int i=0;i<n;i++){
        sum+=arr[i][i];
    }
    for(int i=0,j=m-1;i<n,j>=0;i++,j--){
            sum1+=arr[i][j];
        }
    printf("sum of right(main) diagnol is =%d\n",sum);
    printf("sum of left(minor) diagnol is=%d",sum1);
}
