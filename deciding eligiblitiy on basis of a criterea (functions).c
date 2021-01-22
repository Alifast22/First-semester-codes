#include<stdio.h>
int marks(int math,int physics, int chemistry)
{
	int total;
	if (math>=65)
	{
		if(physics>=55)
		{
			if(chemistry>=50)
			{
				total=math+physics+chemistry;
				if(total>=180 || (math+physics)>140)
				{
					printf("eligible for admission");
				}
				else
		{
			printf("Not eligible for admission");
		}
			}
			else
		{
			printf("Not eligible for admission");
		}
		}
		else
		{
			printf("Not eligible for admission");
		}
		
	}
	else
	{
		printf("Not eligible for admission");                                
	}
	

}




main()
{
	int math,physics,chemistry;
	
	printf("Enter the marks of maths :");
	scanf("%d",&math);
	printf("Enter the marks of physics : ");
	scanf("%d",&physics);
	printf("Enter the marks of chemistry : ");
	scanf("%d",&chemistry);
	
	
	marks(math,physics,chemistry);
}

