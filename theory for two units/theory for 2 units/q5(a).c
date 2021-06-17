#include <stdio.h>
#include<stdlib.h>
int main()
{
int t;
float tc,fc=0;
char r[5],cc[5],c[5];
printf("Enter the no of ticket:");
scanf("%d",&t);
if (t<5 || t>40)
{
printf("Minimum of 5 and Maximum of 40 tickets");
exit(0);
}
printf("Do you want refreshment:");scanf("%s",&r);
printf("Do you have coupon code:");
scanf("%s",&cc);
printf("Enter the circle:");
scanf("%s",&c);
if(c[0]=='k')
{
tc=75*t;
}
else if(c[0]=='q')
{
tc=150*t;
}
else
{
printf("Invalid Input");
exit(0);
}
fc=tc;
if(t>20)
{
tc=tc-((0.1)*tc);}
fc=tc;
if(cc[0]=='y')
{
fc=tc-((0.02)*tc);
}
if(r[0]=='y')
{
fc=fc+(t*50);
}
printf("Ticket cost:%.2f",fc);
return 0;
}