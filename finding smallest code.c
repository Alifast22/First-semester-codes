#include <stdio.h>
#include <stdlib.h>

main()
{
	int num,i,j,small=10000;
	
	printf("Input total number of elements :");
	scanf("%d",&num);
	
	int *p;
	p=(int*)malloc(num*sizeof(int));
	for(i=0;i<num;i++)
	{
		printf("Marks of student %d is : ",i+1);
		scanf("%d",p+i);
		
	}
	
		for(i=0;i<num;i++)
	{
		if(*(p+i)<small)
		{
			small=*(p+i);
		}
	
	}
	

		printf("Smallest value is : %d\n",small);
	
	free(p);
	
}

