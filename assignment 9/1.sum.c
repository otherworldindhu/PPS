#include<stdio.h>
int sum();
int main()
{

    int c=sum();
    printf("Sum:%d",c);
    return 0;
}
int sum()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    int addition=a+b;
    return addition;
}