#include<stdio.h>
int main(){
system("cls");
int mrk1,mrk2,mrk3,mrk4,mrk5,sum,avg;
printf("Enter the marks of five subjects:");
scanf("%d%d%d%d%d",&mrk1,&mrk2,&mrk3,&mrk4,&mrk5);
sum=mrk1+mrk2+mrk3+mrk4+mrk5;
avg=sum/5;
if(avg>=90)
printf("A+");
else if(avg>=80 && avg<90)
printf("A");
else if(avg>=70 && avg<80)
printf("B+");
else if(avg>=60 && avg<70)
printf("B");
else if(avg>=50 && avg<60)
printf("C");
else
printf("Fail");
return 0;
}