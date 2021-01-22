#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{
	int num,sum=1,k,count=0;
	
	printf("Enter any number : ");
	scanf("%d",&num);
	k=digit_count(num,count);
	printf("Number of digits in %d are %d",num,k);

	
	
}

int digit_count (int num,int count)

{
	int rem=0;
	
	rem=num%10;
	count=count+1;
	num=num/10;
	
	if( num==0)
	{
		return count;
	}

	digit_count(num,count);
}

