#include<stdio.h>
int main()
{
int total_price,puff,pizza,cd;
printf("Enter the no of pizzas bought:");
scanf("%d",&pizza);
printf("Enter the no of puffs bought:");
scanf("%d",&puff);
printf("Enter the no of cool drinks bought:");scanf("%d",&cd);
printf("\n\nBill Details\n");
printf("No of pizzas: %d\n",pizza);
printf("No of puffs: %d\n",puff);
printf("No of cooldrinks: %d\n",cd);
total_price = (pizza*100) + (puff*20) + (cd*10);
printf("Total price= %d\n",total_price);
return 0;
}
