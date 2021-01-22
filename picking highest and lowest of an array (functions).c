#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int ordering (int arr[],int len)
{
	
 	int i,j,var;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(arr[i]<arr[j])
			{
				var=arr[i];
				arr[i]=arr[j];
				arr[j]=var;
			}
		
	}
	

	
}
return arr;

}

main()
{
	int size,i;
	printf("Enter the size of the arrray : ");
	scanf("%d",&size);
	int arr[size];
	for (i=0;i<size;i++)
	{
		printf("Enter the %d element : ",i);
		scanf("%d",&arr[i]);
	
	}
	
	ordering(arr,size);
	
    printf("The smallest element is %d\n",arr[0]);
    printf("The largest element is %d",arr[size-1]);

	
}

