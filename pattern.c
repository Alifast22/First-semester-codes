#include<stdio.h>
main()
{
int num,i,j;
printf("Enter the first number : ");
scanf("%d",&num);
for (i=1;i<=num;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",i);
}
printf("\n");
}
}
