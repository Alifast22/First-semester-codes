#include<stdio.h>
main()
{
int num,i,j,k;
printf("Enter the first number : ");
scanf("%d",&num);
for (i=1;i<=num;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
if (i==j)
{
for(k=1;k<=num-i;k++)
{
printf("*");
}
}
}
printf("\n");
}
}
