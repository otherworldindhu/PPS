#include <stdio.h>
int main()
	{
	    int i,j,mA[2][2],mB[2][2],res[2][2];
	    printf("enter matrix A:");
for(i=0;i<2;i++)
	    for(j=0;j<2;j++)
	    scanf("%d",&mA[i][j]);
	    printf("enter matrix B:");
	    for(i=0;i<2;i++)
	    for(j=0;j<2;j++)
	    scanf("%d",&mB[i][j]);
	    for(i=0;i<2;i++)
        {
	    for(j=0;j<2;j++)
	    { res[i][j]=0;
	    res[i][j]=mA[i][j]+mB[i][j];
	    }
	    }
	    printf("resultant matrix:");
	    for(i=0;i<2;i++)	    
	    {
	    for(j=0;j<2;j++)
	    printf("%d\t",res[i][j]);
	    }
	    return 0;
	}
