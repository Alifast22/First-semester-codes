#include <stdio.h>

main()
{
	int size,i;
	
	char arr[100];
	printf("Enter the string : ");
	gets(arr);
	
	printf("Enter the size of array : ");
	scanf("%d",&size);
	


	 for(i=0;i<size;i++)
    {
    	
    	printf(" %c",arr[i]);
    
	}
	
}

