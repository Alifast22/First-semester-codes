#include <stdio.h>
#include <stdlib.h>
void vp(void *p,int num)
{
		if(num==1)
		{
			printf("The value you enter was :%d",*(int*)p);
		}
		
		else if(num==2)
		{
			printf("The value you enter was :%f",*(float*)p);
			}
		
		else if(num==3)
		{	
			printf("The value you enter was : %c",*(char*)p);
		}
		
		
}
main()
{
	int num,val;
	float val1;
	char val2;
	printf("Enter 1 if you want to enter an integer\nEnter 2 if you want to enter a float\nEnter 3 if you want to enter a character : ");
	scanf("%d",&num);
	
	void *p;
		if(num==1)
		{
			printf("Enter the value : ");
			scanf("%d",&val);
			p=&val;
			vp(p,num);
		
		}
		
		else if(num==2)
		{
			printf("Enter the value : ");
			scanf("%f",&val1);
			p=&val1;
			vp(p,num);

			}
		
		else if(num==3)
		{
			printf("Enter the value : ");
			scanf(" %c",&val2);
			p=&val2;
			vp(p,num);
		
		}
		
	
	
	
	
}
