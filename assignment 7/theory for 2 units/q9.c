#include<stdio.h>
int gcd(int x,int y)
{
if(x==y)
return(x);
else if(x>y)
return gcd(x-y,y);
else
return gcd(x,y-x);
}
int main()
{
int t1,t2;
printf("Enter 2 numbers : ");
scanf("%d %d", &t1, &t2);
int c=gcd(t1,t2);
printf("The HCF or gcd of %d and %d is %d.",t1,t2,c);return 0;
}