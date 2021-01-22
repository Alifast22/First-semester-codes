#include <stdio.h>


main()
{
	int arr[]={5,3,10,6,7,9,8};

	int small=100000000000,i,j;
	int *p;
	p=&arr[0];
	
	
	for(i=0;i<7;i++)
	{	
		if(*(p+i)<small)
		{
			small =*(p+i);
			
		}
	
	}
	
	printf("smallest value is : %d",small);
}
