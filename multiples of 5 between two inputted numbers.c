#include<stdio.h>
main()
{
int num1,num2,i;
printf("Enter the first number : ");
scanf("%d",&num1);
printf("Enter the second number : ");
scanf("%d",&num2);
if(num1==0)
{
 num1=num1+1;
}
for (i=num1;i<=num2;i++)
{
if (i%5==0)
{
printf("%d\n",i);
}
}
}
