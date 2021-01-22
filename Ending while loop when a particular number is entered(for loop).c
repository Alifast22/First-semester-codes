#include<stdio.h>
void main()
{
int num;
printf("var : ");
scanf("%d",&num);
for(num=0;num!=88;num--)
{
printf("var : ");
scanf("%d",&num);
if (num==88)
{
break;
}
}
printf("Out of the for loop");
}
