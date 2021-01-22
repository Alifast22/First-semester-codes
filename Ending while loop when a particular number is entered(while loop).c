#include<stdio.h>
main()
{
int num;
printf("Enter a number : ");
scanf("%d",&num);
while(num!=88)
{
printf("Enter a number : ");
scanf("%d",&num);
}
printf("Out of for--loop");
}
