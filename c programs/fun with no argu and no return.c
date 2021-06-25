/*Write a c program with function prototyping 4 types)Find the numbers which are divisible by 3 not divisible by 9 from 1 to n natural numbers.

1.Function with no arguments and no return values*/

#include<stdio.h>
int fun()
{
    int n,i;
    printf("enter number:");
    scanf("%d",&n);
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
    fun();
    
    return 0;
}