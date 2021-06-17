#include <stdio.h>
int main()
{
int r=4,t=0;
for (int i=1;i<=r;i++)
{
t=0;
for (int sp=1;sp<=r-i; sp++)
{printf(" ");
}
while (t!=2*i-1)
{
printf(" * ");
++t;
}
printf("\n");
}
for (int i=r;i>=1;i--)
{
for (int sp=0;sp<r-i;sp++)
printf(" ");
for (int j = i;j<=2*i-1;j++)
printf(" * ");
for (int j=0;j<i-1;j++)
printf(" * ");
printf("\n");
}
return 0;
}