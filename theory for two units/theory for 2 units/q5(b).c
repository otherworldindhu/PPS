#include <stdio.h>
int main()
{
int n,rev=0,r,a;
printf("Enter number:");
scanf("%d",&n);a=n;
if(n>0){
while(n>0)
{
r=n%10;
rev=(rev*10)+r;
n=n/10;
}
if(a==rev)
printf("Palindrome");
else
printf("Not a Palindrome");
}
else
{
printf("Invalid input");
}
return 0;
}
