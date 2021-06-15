#include <stdio.h>
 void main() 
 {
     int x[5][5];
     int i,j,r,c,iden=1;
     printf("Enter rows and cols of the matrix:\n");
     scanf("%d %d",&r,&c);
     printf("Enter the elements:\n");
     for(i=0;i<r;i++) 
     {
      for(j=0;j<c;j++) 
         {
             scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++) 
		{
			if((x[i][i]!= 1) || ((i!=j) && (x[i][j]!=0))) 
			{
				iden= 0;
				break;
			}
		}
	}
	if(iden== 1 )
	{
	printf("It is an identity matrix.\n");
	}
	else
	{
	  printf("It is not an identity matrix.\n");
	}
}
