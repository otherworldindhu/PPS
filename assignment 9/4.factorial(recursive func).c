#include<stdio.h>
void call(int);
int fact=1;
int main()
{
    int a;
    printf("enter number:");
    scanf("%d",&a);
    
    call(a);
    printf("Factorial:%d",fact);
    return 0;
}
void call(int x)
{
    
    if(x!=0)
    {
        fact=fact*x;
        call(x-1);
    }
    
}