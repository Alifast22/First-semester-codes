#include <stdio.h>
void main()
{
int a=0,c=0,b=0,total;
float dis,cus,remain;
printf("Enter the total T-shirts\n");
scanf("%d",&a);
printf("Enter the total Formal shirts\n");
scanf("%d",&b);
printf("Enter the total wrist watches\n");
scanf("%d",&c);
printf("\ntotal items purchased %d\n",a+b+c);
 total=a*500+b*1000+c*500;
 printf("\nThe total amount is %d\n",total);
printf("\nThe customer pays: \n");
 scanf("%f",&cus);
 remain=cus-total;

 switch(total>3500)
 case 1:
{
printf("\nCongratulations you have purchased item over 3500 so enjoy the ten percent discount on total price\n");
dis=total*0.1;
}
 printf("\nAmount returned to customer :%.2f\n",dis+remain);
}
