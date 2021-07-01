/*Passing 2d array to function 
*/
#include<stdio.h>
int main()
{
    int num[2][2],i,j;
    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
    {
        scanf("%d",&num[i][j]);
    } 
    }
    displayNumbers(num);
    return 0;
}
void displayNumbers(int num[][2])
{
    int i,j;
    printf("Displaying\n");
    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
    {
        printf("%d",num[i][j]);
    } 
    }
}