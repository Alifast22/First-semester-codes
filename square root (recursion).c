#include <stdio.h>

int sqrt(int num,int a,int sqt);
main()
{
	int a=1,num,z,sqt=0;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	z=sqrt(num,a,sqt);
	if(z==0)
	{
		printf("Not a perfect square root");
	}
	else if(z!=0)
	{
		printf("sqrt is %d",z);
	}
	
}

int sqrt(int num,int a,int sqt)
{
	
	if(a==num)
	{
		return sqt;
		
	}
	if(num%a==0 && num/a==a)
	{	
		sqt=a;
	}
	a++;
	sqrt(num,a,sqt);
}
