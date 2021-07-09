* To calculate and display the net pay of employees  */
#include<stdio.h>
struct employ
{
    int en;
    char name[20];
    int bp,a,d,np;
}e[100];
int main()
{
    int i,n;
    printf("Enter the number of employees : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the employee number : ");
        scanf("%d",&e[i].en);
        printf("\nEnter the name : " );
        scanf("%s", e[i].name);
        printf("\nEnter the basic pay, allowance & deductions : ");
        scanf("%d %d %d",&e[i].bp,&e[i].a,&e[i].d);
        
        e[i].np=e[i].bp+e[i].a-e[i].d;
        
        
    }
    printf("\nEMPLOYEE NO NAME Bpay      Allow     DEd     Npay        ");
    for(i=0;i<n;i++)
    {
        printf("\n%d           %s  %d       %d        %d  %d",e[i].en,e[i].name,e[i].bp,e[i].a,e[i].d,e[i].np);
    }
    return 0;
}