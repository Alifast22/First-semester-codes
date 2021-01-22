#include<stdio.h>
main()
{
int num[10]={0,1,2,3,4,5,6,7,8,9};
int a,i,j;
for (i=0;i<4;i++)
{
printf("Enter a number :");
scanf("%d",&a);
for(j=0;j<10;j++)
{
if (a==num[j])
{
printf("The number was %d\n",num[j]);
printf("The position was %d\n",i);
break;
}
}
if (a==num[j])
{
break;
}
}
}

