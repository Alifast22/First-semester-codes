#include <stdio.h>

main()
{
	int num,sum=0,a=1,z;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	if(num>1)
	{
		z=perfect(num,sum,a);
	}
	else if (num<=1)
	{
		printf("Not a perfect number");
	}
	
	if(z==num)
	{
		printf("Perfect");
	
	}
	else
	{
		printf("not");
	}
	
	
}

perfect(int num,int sum,int a )
{
	if(a==num)
	{
		return sum;
	}
	
	if(num%a==0)
	{
		sum=sum+a;
	}
	a++;
	perfect(num,sum,a);
}
