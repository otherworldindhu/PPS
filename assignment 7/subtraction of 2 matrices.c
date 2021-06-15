#include<stdio.h>
int main()
{
    int i,j,m1[2][2],m2[2][2],res[2][2];
    printf("enter elements of matrix1:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("enter elements of matrix2:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            //res[i][j]=0;
            res[i][j]=m1[i][j]-m2[i][j];
        }
    }
    printf("resultant matrix:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",res[i][j]);
        }
    }
    return 0;
}
