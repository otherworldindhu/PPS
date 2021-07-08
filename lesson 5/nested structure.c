#include <stdio.h>
struct dob
{
  int date,month,year;
};
struct eka
{
    char name[20];
    int regno;
    struct dob k;
}e;
int main()
{
    printf("ENter the Student Name:");
    scanf("%s",e.name);
    printf("Enter student register no:");
    scanf("%d",&e.regno);
    printf("Enter the DOB:");
    printf("\nEnter the date:");
    scanf("%d",&e.k.date);
    printf("Enter the month:");
    scanf("%d",&e.k.month);
    printf("Enter the year:");
    scanf("%d",&e.k.year);
    printf("Name:%s",e.name);
    printf("\nReg no:%d",e.regno);
    printf("\nDOB:%d:%d:%d",e.k.date,e.k.month,e.k.year);
    return 0;
}