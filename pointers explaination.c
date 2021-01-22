#include <stdio.h>

main()
{
	int arr[2][3]={
	{3,5,6},
	{2,9,8},
	};
	
	int **p,i,j;
	
	p=&arr[0][0];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		
		printf("%d",*(*(p+i)+j));
}
	}
}
