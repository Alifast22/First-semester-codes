#include<stdio.h>

main()
{
	int i,j,num,k;
	
	printf("Enter the number ");
	scanf("%d",&num);
	for(i=0;i<num;i+=2)
	{
		for(k=1;k<i;k+=2)
		{
			printf(" ");
		}	
	
		for(j=num;j>=i+1;j--)
		{
			printf("*");
		}
		
	
	 for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=num;j>=i+1;j--)
		{
			printf("*");
		}	
		
		printf("\n");
		
    }
    for(i=0;i<=num;i+=2)
    {
	
    	for(k=0;k<i+num+1;k+=2)
		{
			printf(" ");			
    	}
    	for(j=num-2;j>i;j--)
		{
			printf("*");
		}	
		
		printf("\n");
		
   }

}

