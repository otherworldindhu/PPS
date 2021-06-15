#include<stdio.h>
int main()
{
    int i,j,k,mult_D[3][3][3];
    printf("Read the elements of 3D array:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&mult_D[i][j][k]);
            }
        }
    }
    
    
    printf(" 3D array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d\t",mult_D[i][j][k]);
            }
        }
    }
    return 0;
}
