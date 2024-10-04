#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,total_marks,percentage;
    printf("enter the marks of five subjects");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total_marks=m1+m2+m3+m4+m5;
    percentage=total_marks/5;
    printf("total marks of five subjects = %d\n",total_marks);
    printf("percentage of five subjects = %d",percentage);
    return 0;
}