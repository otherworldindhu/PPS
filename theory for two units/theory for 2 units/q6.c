#include<stdio.h>
int main()
{
int salary;
float ar;
printf("Enter the salary:");
scanf("%d",&salary);
printf("Enter the Performance appraisal rating:");
scanf("%f",&ar);
if(1<=ar && 3>=ar)
{
salary=salary + (0.1* salary);
printf("%d",salary);
}
else if(3.1<=ar && 4>=ar)
{
salary=salary + (0.25* salary);printf("%d",salary);
}
else if(4.1<=ar && 5>=ar)
{
salary=salary+(0.3*salary);
printf("%d",salary);
}
else if(salary<=0 || ar<1 && ar>5)
{
printf("Invalid input");
}
return 0;
}
