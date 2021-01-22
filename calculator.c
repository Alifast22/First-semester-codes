#include<stdio.h>
void main()
{
int options,a,b,sum,subtraction,product,division;
printf("Welcome to the calculator.\nPress 1 for addition,2 for subtraction,3 for mltiplication and 4 for division.Press 5 for square root \n ");
scanf("%d",&options);
switch(options){
case 1 :
{
printf("Welcome to additition.\nNow enter two numbers whcih you want to be added\nfirst number is: \nsecond number is :\n");
scanf("%d%d",&a,&b);
sum=a+b;
printf("Sum of the two numbers is:%d ",sum);
break;
}
case 2 :
{
printf("Welcome to subtraction.\nNow enter two numbers whcih you want to be subtracted\nfirst number is: \nsecond number is :\n");
scanf("%d%d",&a,&b);
subtraction=a-b;
printf("subtraction of the two numbers is:%d ",subtraction);
break;
}
case 3 :
{
 printf("Welcome to product.\nNow enter two numbers whcih you want to be multiplied\nfirst number is: \nsecond number is:\n");
scanf("%d%d",&a,&b);
product=a*b;
printf("multiplication of the two numbers is:%d ",product);
break;
}
case 4 :
{
printf("Welcome to division.\nNow enter two numbers whcih you want to be divided\nfirst number is: \nsecond number is :\n");
scanf("%d%d",&a,&b);
division=a/b;
printf("division of the two numbers is:%d",division);
break;
}
}
}

