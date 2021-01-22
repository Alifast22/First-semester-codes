#include <stdio.h>

main()
{
	int num,var=0,a,i;
	printf("Enter the size of the array : ");
	scanf("%d",&num);
	
	int arr[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the array : ");
		scanf("%d",&arr[i]);
		
	}
	
	for(i=0;i<num;i++)
	{
		a=(num-1)-i;
		if (i>a)
		{
			break;
		}
	
		var=arr[i];
		arr[i]=arr[a];
		arr[a]=var;
		
	}
	
	
	for(i=0;i<num;i++)
	{
		printf("The array was : %d\n",arr[i]);
	}	
}
