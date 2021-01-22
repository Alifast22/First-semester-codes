#include<stdio.h>
void main()
{
int W,H;
float BMI;
printf ("Enter weight ");
scanf("%d",&W);
printf ("Enter height ");
scanf("%d",&H);
BMI=(W*703)/(H*H);
printf("BMI value is: %f\n",BMI);
if(BMI<15)
{
printf("Starvation");
}
else if(BMI<18.5)
{
printf("Underweight");
}
else if(BMI>=18.5 && BMI<25)
{
printf("Ideal");
}
else if(BMI>=25 && BMI<30)
{
printf("Overweight");
}
else if(BMI>=40)
{
printf("Mobidly obese");
}
}
