# include <stdio.h>

LCM(int num,int n,int mul)
{
	
	if((n*mul%num==0))
	{
		return n*mul;
	}
	
	mul++;
	
	LCM(num,n,mul);
	
}

main()
{
	int num,n,mul=1,z;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Enter another number : ");
	scanf("%d",&n);	
	
	z=LCM(num,n,mul);
	printf("%d",z);
	
}



