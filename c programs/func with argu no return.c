/*Write a c program with function prototyping 4 types)Find the numbers which are divisible by 3 not divisible by 9 from 1 to n natural numbers.
2.Function with arguments and no return value */
#include<stdio.h>
int fun(int n)
{
    
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%3==0 && i%9!=0)
        {
            printf("%d,",i);
        }
    }
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    fun(n);
    return 0;
}