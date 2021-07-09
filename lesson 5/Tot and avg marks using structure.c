/* To calculate and display the total,average for 3 subject marks using Structure */
#include<stdio.h>
struct smarks
{
    char sname[20];
    int regno;
    int s1,s2,s3,total;
    float avg;
    
}sm1[56];
//struct smarks sm1[56];
int main()
{
    int i,n;
    printf("Enter total no of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\nEnter name,regno,s1,s2,s3 respectively: ");
    
    scanf("%s %d %d %d %d",sm1[i].sname,&sm1[i].regno,&sm1[i].s1,&sm1[i].s2,&sm1[i].s3);
    sm1[i].total=sm1[i].s1+sm1[i].s2+sm1[i].s3;
    printf("total:%d",sm1[i].total);
    sm1[i].avg=sm1[i].total/3;
    printf("\nAvg:%f",sm1[i].avg);
    }
    for(i=0;i<n;i++)
    {
        printf("\n\nName:%s",sm1[i].sname);
        printf("\nRegno:%d",sm1[i].regno);
        printf("\nTotal:%d",sm1[i].total);
        printf("\nAverage:%.2f",sm1[i].avg);
        printf("\n\n");
        
    }
    return 0;
}