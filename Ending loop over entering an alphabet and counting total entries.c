#include<stdio.h>
void main()
{
int i=0,sum;
char cac;
printf("Enter any character other than z : ");
scanf(" %c",&cac);
while(cac!='z' && cac!='Z')
{
printf("Enter any character other than z : ");
scanf(" %c",&cac);
i++;
}
printf("sum is : %d",i);
}

