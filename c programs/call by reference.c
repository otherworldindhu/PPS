/* Call by reference */
#include<stdio.h>
int swap(int *,int *);
int main()
{
    int a,b;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    //printf("\na=%d b=%d",a,b);
    return 0;
}
int swap(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
    printf("a=%d b=%d",*x,*y);
    return 0;
}