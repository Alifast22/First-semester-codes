#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>

int average()
{
	int cou_1[20],cou_2[20],cou_3[20],cou_4[20],cou_5[20],i,j,sum;
	float avg=0;
	for(j=1;j<=5;j++)
	{
	
	for(i=0;i<4;i++)
	{
		printf("Enter marks student %d for course %d : ",i+1,j);
		scanf("%d",&cou_1[i]);
		sum=sum+cou_1[i];
	}
	avg=sum/i;
	printf("\naverage of couse %d is %f\n",j,avg);
}
}

main()
{
	average();
}


