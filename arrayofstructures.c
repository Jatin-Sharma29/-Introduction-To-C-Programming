#include<stdio.h>
struct Student
{
    int rollnumber;
    char name[30];
    int marks[5];
    int total_marks;
};
void printStudentDetails(struct Student *s, int n){
    printf("Student Marks Details\n");
    printf("%8s %15s %5s\n","Roll No","Name", "Total");
    for(int i=0; i<n; i++){
        printf("%8d %15s %5d\n", s[i].rollnumber, s[i].name, s[i].total_marks);
    }
}

int findLargestMarks(struct Student *s, int n){
    int max = 0, index = -1;
    for(int i=0; i<n; i++){
        if(s[i].total_marks>max){
            max = s[i].total_marks;
            index = i;
        }
    }
    return index;
}
int main(){
    int n;
    printf("Enter Array Size : ");
    scanf("%d", &n);
    struct Student stu[n];
    for(int i=0; i<n; i++){
        printf("Enter Roll No. : ");
        scanf("%d", &stu[i].rollnumber);
        printf("Enter name : ");
        fflush(stdin);
        gets(stu[i].name);
        printf("Enter 5 subject marks : ");
        stu[i].total_marks = 0;
        for(int j=0; j<5; j++){
            scanf("%d", &stu[i].marks[j]);
            stu[i].total_marks += stu[i].marks[j];
        }
    }
    printStudentDetails(stu, n);
    int index = findLargestMarks(stu, n);
    if(index != -1){
        printf("Top Student Details are : \n");
        printf("%d \t %s \t %d", stu[index].rollnumber, stu[index].name, stu[index].total_marks);
    }
return 0;
}