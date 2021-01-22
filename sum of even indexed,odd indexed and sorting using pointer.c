#include <stdio.h>

sumofeven(int *p)
{
	static int sum=0;
	sum=sum+*p;
	return sum;
}

sumofodd(int *p)
{
	static int sum=0;
	sum=sum+*p;
	return sum;
}

sortarray(int arr[])
{
	int var,i,j,*p;
	p=&arr[0];
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		
		if(*(p+i) < *(p+j))
		{
			var=*(p+i);
			*(p+i)=*(p+j);
			*(p+j)=var;
		}
	}
	}
	for(i=0;i<10;i++)
	{
	
	printf("%d\n",*(p+i));
}
}

main()
{
	int a[10]={2,7,4,8,3,2,9,8,11,15},i,z,y;
	
	for(i=0;i<10;i++)
	{
		if(i%2==0)
		{
			z=sumofeven(&a[i]);
			
		}
		
	
		else if(i%2==1)
		{
			y=sumofodd(&a[i]);
		}
		
	}
	sortarray(a);
	printf("sum of even indexed numbers : %d\n",z);
	printf("sum of odd indexed numbers : %d",y);
	
}


