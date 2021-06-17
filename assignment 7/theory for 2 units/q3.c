#include<stdio.h>
#include <stdlib.h>
int main()
{
int x,y,z,t;
printf("Enter the digits: \n");
scanf("%d %d %d %d", &x, &y, &z, &t);
printf("\n\n");
printf("%d - %c\n",x,(char)x);
printf("%d - %c\n",y,(char)y);
printf("%d - %c\n",z,(char)z);
printf("%d - %c\n",t,(char)t);
return 0;}
