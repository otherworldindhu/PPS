#include <stdio.h>
int main()
	{
	    int i,j,mA[2][2],mB[2][2],res[2][2],equal=0;
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
	    {
	    if(mA[i][j]==mB[i][j])
	    {
	        equal=1;
	    }
	    }
	    }
	    if(equal==1)
	    {
	        printf("They're equal.");
	    }
	    else
	    {
	        printf("They are not equal");
	    }
	    return 0;
	}
