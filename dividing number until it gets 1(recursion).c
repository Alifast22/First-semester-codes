#include<stdio.h>

main()
{
	int num,count,z;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	z=collatz(num,count);
	printf("Count is : %d",z);
}


int collatz(int num,int count)
{
	if(num==1)
	{
		return count;
	}
	
	if(num%2==0)
	{
		count=count+1;
		collatz(num/2,count);
	}
	else if(num%2==1)
	{
	    count=count+1;
		collatz(3*num+1,count);	
	}
}

