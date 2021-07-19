#include<stdio.h>
int main()
{
    int n,i,res=0,temp;
    printf("Enter number:");
    scanf("%d",&n);
    temp=n;
    for(i=1;i<=n-1;i++)
    {
        if(n%i==0)
        {
            res=i+res;
        }
    }
    if(temp==res)
    {
        printf("Perfect number.");
    }
    else
    {
        printf("Not a perfect number.");
    }
    
    return 0;
}