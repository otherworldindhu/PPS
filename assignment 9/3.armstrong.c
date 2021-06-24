#include<stdio.h>
int arm();
int main()
{
    arm();
    return 0;
}
int arm()
{
    int a,arms=0,temp,i,r;
    printf("Enter any number:");
    scanf("%d",&a);
    temp=a;
    for(i=0;a!=0;i++)
    {
        r=a%10;
        arms=r*r*r+arms;
        a=a/10;
    }
    if(arms==temp)
    {
        printf("It is an armstrong number.");
    }
    else
    {
        printf("It is not an armstrong number.");
    }
}