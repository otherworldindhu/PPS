/* Structure concept in C*/
#include<stdio.h>
struct student
{
    
    char name[20];
    int regno;
};
struct student s1;
void main()
{
    printf("Enter name:");
    scanf("%s",s1.name);
    printf("Enter the reg no:");
    scanf("%d",&s1.regno);
    printf("Student name:%s",s1.name);
    printf("\nStudent regno:%d",s1.regno);
}