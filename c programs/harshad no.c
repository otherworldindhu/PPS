#include<stdio.h>
int main()
{
    int n,i,har=0,rem,temp;
    printf("enter no:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        har=rem+har;
        n=n/10;
    }
    if(temp%har==0)
    {
        printf("harshad no");
    }
    else
    {
        printf("Not harshad no");
    }
    return 0;
}