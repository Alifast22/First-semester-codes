#include <stdio.h>
int main()
{
int age,Q,fare;
printf("Enter the age ");
scanf("%d",&age);
printf("Enter the quantity ");
scanf("%d",&Q);
if (age<=11)
{
fare=Q*20;
}
else if(age<65)
{
fare=Q*50;
}
else
{
fare=Q*30;
}
printf("the fare is : %d",fare);
}

