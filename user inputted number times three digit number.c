#include <stdio.h>
int main()
{
 int a, y = 99, i;
 printf("Enter any number: ");
 scanf("%d", &a);
 while(a<1000)
{

 for ( i = 0; i < a; i++ )
 {

 y = y + 2;
 printf("%d\n", y);
 }
 break;
}
}
