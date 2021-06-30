#include<stdio.h>
int swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nAfter swapping: a=%d and b=%d",x,y);
}

int main()
{
    int a,b;
  printf("Enter two numbers:");
  scanf("%d%d",&a,&b);
  printf("\nBefore swapping: a=%d and b=%d",a,b);
  swap(a,b);
    return 0;
}
