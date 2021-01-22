#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{
	int num,base,mul=1,k;
	
	printf("Input the base value : ");
	scanf("%d",&num);
	printf("Input the value of power : ");
	scanf("%d",&base);	
	k=power(num,base,mul);
	printf("The value of %d raised to the power %d is : %d",num,base,k);

	
	
}

int power (int num,int base,int mul)

{
	if( base==0)
	{
		return mul;
	}
	
	mul=mul*num;
	base--;

	power(num,base,mul);
}

