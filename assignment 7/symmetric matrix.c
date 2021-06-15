#include <stdio.h>
 int main()
{ 
    int i,j,r,c,a[5][5],tra[5][5],sym=1;
    printf("The matrix must be a square matrix i.e., the no of rows and colums are equal.");
    printf("\n\nenter rows:");
    scanf("%d",&r);
    printf("enter columns:");
    scanf("%d",&c);
 printf("enter elements:");
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     scanf("%d",&a[i][j]);
 }
 
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
      tra[j][i]=a[i][j];
       
       
   }
 }
 if(r==c)
 {
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
      if(a[i][j]!=tra[i][j])
      {
      sym=sym+1; 
      break;
      }
       
   }
 }
 
 if(sym==1)
 {
     printf("\nIt is a symmetric matrix.");
 }
 else
 {
     printf("\nIt is not a symmetric matrix.");
 }
 }
 else
 {
     printf("It is not a symmetric matrix. Rows must be equal to the no of columns.");
 }
  return 0;
}
