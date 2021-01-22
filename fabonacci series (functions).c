#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>

int fabbonacci(int term)
{
	
	int i,x=0,y=1;	
	for(i=0;i<(term/2);i++)
	{
		printf("%d, ",x);
		printf("%d, ",y);
		
		x=x+y;
		y=y+x;
		
	}	
}


main()
{
	int term;
	
	printf("Enter the number of terms :");
	scanf("%d",&term);
	
	fabbonacci(term);
	
	

}


