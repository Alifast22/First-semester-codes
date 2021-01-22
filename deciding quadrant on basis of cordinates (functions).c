#include<stdio.h>

coordinate(int x,int y)
{

	if (x>0 && y>0)
	{
		printf("coordinate is in the first quadrant");
		
	}
	else if(x<0 && y>0)
	{
		printf("coordinate is in the second quadrant");
	}
	else if(x<0 && y<0)
	{
		printf("coordinate is in the third quadrant");		
	}
	else if(x>0 && y<0)
	{
		printf("coordinate is in the fourth quadrant");		
	}
	else if (x==0 && y>0)
	{
		printf("Value is 90 degree to x axis");
		
	}
	else if (x==0 && y<0)
	{
		printf("Value is 270 degree to x axis");
		
	}
	else if (x>0 && y==0)
	{
		printf("Value is 0 degree to x axis");
		
	}		
	else if (x<0 && y==0)
	{
		printf("Value is 180 degree to x axis");
		
	}	
	
}

main()
{
	int x,y;
	
	printf("Enter the x coordinate :");
	scanf("%d",&x);
	printf("Enter the y coordinate : ");
	scanf("%d",&y);
	
	coordinate(x,y);
	
}

