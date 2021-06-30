#include<stdio.h>
int add(int b, int c)
{
    int ans=b+c;
    printf("Result:%d",ans);
}
int sub(int b, int c)
{
    int ans=b-c;
    printf("Result:%d",ans);
}
int mul(int b, int c)
{
    int ans=b*c;
    printf("Result:%d",ans);
}
int div(int b, int c)
{
    int ans=b/c;
    printf("Result:%d",ans);
}
int rem(int b, int c)
{
    int ans=b%c;
    printf("Result:%d",ans);
}
int main()
{
    int a,b,c,d;
    printf("Enter 1,2,3,4,5 to perform Addition,Subtraction,Multiplication,Division and Remaider respectively.");
    scanf("%d",&a);
    printf("Enter two numbers:");
    scanf("%d%d",&b,&c);
    switch(a)
    {
        case 1:
        add(b,c);
        break;
        case 2:
        sub(b,c);
        break;
        case 3:
        mul(b,c);
        break;
        case 4:
        div(b,c);
        break;
        case 5:
        rem(b,c);
        break;
        default:
        printf("Enter only 1 to 5.");
    }
    return 0;
}