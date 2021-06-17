#include<stdio.h>
int main()
{
float l, d, m, g;
printf("Enter the no of liters to fill the tank:\n");
scanf("%f", &l);
(l>0)? : printf("%.2f is an Invalid Input", l);
if(l>0)
{
printf("Enter the distance covered \n");
scanf("%f", &d);
(d > 0)? : printf("%.2f is an Invalid Input", d);
if (d>0)
{
m=d * 0.6214;
g=l * 0.2642;
printf("Liters / 100KM \n%.2f \n", l/(d/100));
printf("Miles / gallons \n%.2f \n", m/g);
}
}
}