#include <stdio.h>

main()
{
	int n,i;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];

	for(i=0;i<n;i++)
	{
		printf("Enter the %d value of array : ",i);
		scanf("%d",&a[i]);
	}
	
	int *p;
	p=&a[n-1];
	
	for (i=n-1;i>=0;i--)
	{
		printf("%d\n",*p);
		p--;
	}
}
