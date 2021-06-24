#include<stdio.h>
int call(int,int);

int main()
{
    int a,b;
    printf("enter number:");
    scanf("%d",&a);
    printf("enter power:");
    scanf("%d",&b);
    
    call(a, b);
    int c=call( a, b);
    printf("Result:%d",c);
    return 0;
}
int call(int x,int y)
{
    int i,ans=1;
    for(i=0;i<y;i++)
    {
        ans=ans*x;
        call(x,y-1);
    }
    return ans;
}