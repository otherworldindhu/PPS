#include<stdio.h>
int main(){
int i,j,x=4;
for (i=1;i<=2*x-1;i++)
{
if(i<=x)
for(j=1;j<=i;j++)
printf("%d ",i+2);
else
for(j=1;j<=2*x-i;j++)
printf("%d ",2*x-i+2);
printf("\n");
}
}
