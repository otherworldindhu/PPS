/* To read and display the student details using union concept */
#include<stdio.h>
union student_AIMLB
{
    char dept[20];
    char name[20];
    int regno;
    //char dept[20];
};
union student_AIMLB sa1;
int main()
{
    printf("Enter student name, register number and department:");
    scanf("%s %d %s",sa1.name,&sa1.regno,sa1.dept);
    printf("STUDENT DETAILS:");
    printf("\nNAME:%s\t REG NO:%d\t DEPT:%s\t",sa1.name,sa1.regno,sa1.dept);
    return 0;
}