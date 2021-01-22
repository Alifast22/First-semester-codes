#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>

int multiple_of_3(int start,int end)
{
	
	int count,i,c;	
	for(i=start;i<=end;i++)
	{
		c=i%3;
		if(c==0)
		{
			printf("%d\n",i);
			count=count+1;
		}
		
		
		
	}
	printf("\ntotal number of %d multiples of 3 are there",count);	
	
	
}


main()
{
	int start,end,c,count;
	
	printf("Enter the start range :");
	scanf("%d",&start);
	printf("Enter the end range : ");
	scanf("%d",&end);
	
	multiple_of_3(start,end);
	

}


