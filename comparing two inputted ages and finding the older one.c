#include<stdio.h>
void main()
{
int age_your,age_sister;
printf("Enter your age ");
scanf("%d",&age_your);
printf("Enter your sister age ");
scanf("%d",&age_sister);
if(age_sister>age_your)
{
printf("Your sister is older of the two");
}
 else if(age_sister<age_your)
{
printf("You are older of the two");
}
else
{
printf("both age is same");
}
}
