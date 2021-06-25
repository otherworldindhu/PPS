/*factorial using call by reference method*/
#include<stdio.h>
int facto(int a);
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    
     int c=facto(a);
    printf("Factorial of the given number:%d",c);
    return 0;
}
int facto(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    {
        fact =fact*i;
    }
    return fact;
}