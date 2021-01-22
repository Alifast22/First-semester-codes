#include <stdio.h>
#include<string.h>
main()
{
int num[8],i,pos=0,neg=0,zero=0,sum;
float avg;
for(i=0;i<8;i++)
{
printf("Enter the Number : ");
scanf("%d",&num[i]);
if(num[i]>0)
{
pos=pos+1;
sum=sum+num[i];
}
else if(num[i]<0)
{
neg=neg+1;
}
else
{
zero=zero+1;
}
}
avg=sum/pos;
printf("Number of postive integers are %d,\nNumber of negative intergers are %d,\nNumber of zeros are %d\n",pos,neg,zero);
 printf("Average is : %f",avg);
}

