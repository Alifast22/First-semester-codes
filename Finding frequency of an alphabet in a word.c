#include <stdio.h>
#include<string.h>
main()
{
char name[20],j,i;
int b=0;
printf("Enter a string : ");
gets(name);
printf("Enter the character for which you have to find out frequency : ");
scanf(" %c",&j);
for (i=0;i<strlen(name);i++)
{
if (name[i]==j)
{
b=b+1;
}
}
printf("frequency of %c is %d",j,b);
}

