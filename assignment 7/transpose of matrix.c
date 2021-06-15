#include <stdio.h>
 int main()
{ 
    int i,j,r,c,a[2][2];
    printf("enter rows:");
    scanf("%d",&r);
    printf("enter columns:");
    scanf("%d",&c);
 printf("enter elements:");
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     scanf("%d",&a[i][j]);
 }
 printf("resultant matrix:");
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     printf("%d\t",a[j][i]);
 }
  return 0;
}
