#include<stdio.h>
struct Student
{
    int rollnumber;
    char name[30];
    int marks[5];
    int total_marks;
};
int main(){
    struct Student stu;
    printf("Enter Roll No. : ");
    scanf("%d", &stu.rollnumber);
    printf("Enter name : ");
    fflush(stdin);
    gets(stu.name);
    printf("Enter 5 subject marks : ");
    stu.total_marks = 0;
    for(int i=0; i<5; i++){
        scanf("%d", &stu.marks[i]);
        stu.total_marks += stu.marks[i];
    }

    printf("Roll Number : %d\n", stu.rollnumber);
    printf("Name : %s\n", stu.name);
    printf("Total Marks : %d", stu.total_marks);
    return 0;
}