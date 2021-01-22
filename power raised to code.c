#include<stdio.h>
int main()
{
int num_1,num_2,power=1,i;
printf("Enter a base :");
scanf("%d",&num_1);
printf("Enter an exponent :");
scanf("%d",&num_2);
for(i=1;i<=num_2;i++)
{
power=power*num_1;
}
printf("Answer %d\n",power);
}

