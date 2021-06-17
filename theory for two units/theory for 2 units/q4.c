#include<stdio.h>
int main()
{
int c,e,m;
printf("Enter the number of students placed in CSE:");
scanf("%d",&c);
printf("Enter the number of students placed in ECE:");
scanf("%d",&e);printf("Enter the number of students placed in MECH:");
scanf("%d",&m);
if(c>e && c>m)
{
printf("Highest Placement:CSE");
}
else if(e>c && e>m)
{
printf("Highest Placement:ECE");
}
else if(m>c && m>e)
{
printf("Highest Placement:MECH");
}
else if(c==e==m)
{
printf("None of the department has got the highest placement");
}
else if(c<0 || e<0 || m<0)
{
printf("Input is Invalid.");
}return 0;
}
