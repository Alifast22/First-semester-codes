#include<stdio.h>
void main()
{
char x;
printf("Please enter a character ");
scanf("%c",&x);
if(x>=48 && x<=57)
{
printf("its a digit");
}
else if (x>=65 && x<=90 || x>=97 && x<=122)
{
printf("its an alphabet");
}
else
{
printf("its a special character");
}
}

