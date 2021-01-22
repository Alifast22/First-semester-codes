#include <stdio.h>
#include<math.h>

func(int *p,int *sum,float *avg,float *sd)
{
	int sums,i;
	for(i=0;i<5;i++)
	{
		*sum=*sum+*(p+i);
	}
	*avg=(*sum)/i;
	
	for(i=0;i<5;i++)
	{
		sums=sums+(*(p+i)-*avg)*(*(p+i)-*avg);
	}
	*sd=sums/i;
	
}

main()
{
	int arr[5]={4,9,2,10,7};
	int sum=0;
	float avg=0,sd=0;
	
	func(&arr[0],&sum,&avg,&sd);
	
	printf("Sum is : %d\n",sum);
	printf("Average is : %f\n",avg);
	printf("Standard deviation is : %f",sqrt(sd));
}

