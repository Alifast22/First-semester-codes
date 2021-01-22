#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{
	int num,sum=1,k;
	
	printf("Enter any number : ");
	scanf("%d",&num);
	k=fact(num,sum);
	printf("Fatorial of %d is %d",num,k);

	
	
}

int fact (int num,int sum)

{
	
	if( num==0 || num==1)
	{
		return sum;
	}
	sum=sum*num;
	num--;
	fact(num,sum);
}

