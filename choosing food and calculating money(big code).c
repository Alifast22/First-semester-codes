#include <stdio.h>
#include <conio.h>
int main()
{
	int t,a,b,c,d,totalb,totalf,totalp,totals,totalg;
	char w,x,y,z;
	printf("please select from the following menu\nB=Burger\nF=French Fries\nP=Pizza\nS=Sand witches\n");
	printf("How many types of snacks you need to order : ");
    scanf("%d",&t);
    
    if(t==1)
	{
		printf("Enter first snack you want: ");
		scanf(" %c",&w);


		if (w=='B')
		{
		    printf("Enter the quantity:");
		    scanf("%d",&a);
			totalb=a*200;
		
				
		}
		else if(w=='F')
		{
			printf("Enter the quantity:");
		    scanf("%d",&a);
			totalb=a*50;
			
		}
		else if(w=='P')
		{
			printf("Enter the quantity:");
		    scanf("%d",&a);
			totalb=a*500;
			
		}
		else if(w=='S')
		{
			printf("Enter the quantity:");
		    scanf("%d",&a);
			totalb=a*150;
			
		}
		else
		{
			printf("Please enter correct letter\n");
		}
		printf("You have ordered!");
		
		if (w=='B')
    	printf("\n %d Burgers value %d ",a,totalb);
    	else if (w=='F')
	    printf("\n %d French Fries value %d",a,totalb);
	    else if (w=='P')
	    printf("\n %d Pizza value %d",a,totalb);
	    else if (w=='S')
	    printf("\n %d  Sandwitches value %d",a,totalb);
	    printf("\n your total is: %d",totalb);
	    printf("Thank you for your order, have a nice day");
		
	}
	
	
	
	

  else if(t==2)
	{
		printf("Enter first snack you want to enter: ");
		scanf(" %c",&w);
	
		if (w=='B')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&a);
			totalb=a*200;
	
		}
		else if(w=='F')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&a);
			totalb=a*50;
		
		}
		else if(w=='P')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&a);
			totalb=a*500;

		}
		else if(w=='S')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&a);
			totalb=a*150;
		}
		else
		{
			printf("Enter the correct letter please\n");
		}
		
		printf("Enter second snack you want to enter: ");
		scanf(" %c",&x);

		if (x=='B')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&b);
			totalf=b*200;
		}
		else if(x=='F')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&b);
			totalf=b*50;
		}
		else if(x=='P')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&b);
			totalf=b*500;
		}
		else if(x=='S')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&b);
			totalf=b*150;
		}
		else
		{
			printf("Enter the correct letter please\n");
		}
		printf("You have ordered!\n");
		if (w=='B')
    	printf("\n%d Burgers value %d ",a,totalb);
    	else if (w=='F')
	    printf("\n%d French Fries value %d",a,totalb);
	    else if (w=='P')
	    printf("\n%d Pizza value %d",a,totalb);
	    else if (w=='S')
	    printf("\n%d Sandwitches value %d",a,totalb);

		
		if (x=='B')
    	printf("\n%d Burgers value %d ",b,totalf);
    	else if (x=='F')
	    printf("\n%d French Fries value %d",b,totalf);
	    else if (x=='P')
	    printf("\n%d Pizza value %d",b,totalf);
	    else if (x=='S')
	    printf("\n%d Sandwitches value %d",b,totalf);
	    totalg=totalf+totalb;
	    printf("\nyour total is: %d",totalg);
	    printf("\nThank you for your order, have a nice day");
		
	}
	

    
    
    
    else if(t==3)
	{
		printf("Enter first snack you want to enter: ");
		scanf(" %c",&w);
	
		if (w=='B')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&a);
			totalb=a*200;
	
		}
		else if(w=='F')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&a);
			totalb=a*50;
		
		}
		else if(w=='P')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&a);
			totalb=a*500;

		}
		else if(w=='S')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&a);
			totalb=a*150;
		}
		else
		{
			printf("Enter the correct letter please\n");
		}
		
		printf("Enter second snack you want to enter: ");
		scanf(" %c",&x);

		if (x=='B')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&b);
			totalf=b*200;
		}
		else if(x=='F')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&b);
			totalf=b*50;
		}
		else if(x=='P')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&b);
			totalf=b*500;
		}
		else if(x=='S')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&b);
			totalf=b*150;
		}
		else
		{
			printf("Enter the correct letter please\n");
		}
			printf("Enter third snack you want to enter: ");
		scanf(" %c",&y);

		if (y=='B')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&c);
			totalp=b*200;
		}
		else if(y=='F')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&c);
			totalp=c*50;
		}
		else if(y=='P')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&c);
			totalp=c*500;
		}
		else if(y='S')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&c);
			totalp=c*150;
		}
		else
		{
			printf("Enter the correct letter please\n");
		}
		
		
						printf("You have ordered!\n");
		if (w=='B')
    	printf("\n%d Burgers value %d ",a,totalb);
    	else if (w=='F')
	    printf("\n%d French Fries value %d",a,totalb);
	    else if (w=='P')
	    printf("\n%d Pizza value %d",a,totalb);
	    else if (w=='S')
	    printf("\n%d Sandwitches value %d",a,totalb);

		
		if (x=='B')
    	printf("\n%d Burgers value %d ",b,totalf);
    	else if (x=='F')
	    printf("\n%d French Fries value %d",b,totalf);
	    else if (x=='P')
	    printf("\n%d Pizza value %d",b,totalf);
	    else if (x=='S')
	    printf("\n%d Sandwitches value %d",b,totalf);

	    
	    
	    		
		if (y=='B')
    	printf("\n%d Burgers value %d ",c,totalp);
    	else if (y=='F')
	    printf("\n%d French Fries value %d",c,totalp);
	    else if (y=='P')
	    printf("\n%d Pizza value %d",c,totalp);
	    else if (y=='S')
	    printf("\n%d Sandwitches value %d",c,totalp);
	    totalg=totalf+totalb+totalp;
	    printf("\nyour total is: %d",totalg);
	    printf("\nThank you for your order, have a nice day");
		
	}
	
    else if(t==4)
	{
		printf("Enter first snack you want to enter: ");
		scanf(" %c",&w);
	
		if (w=='B')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&a);
			totalb=a*200;
	
		}
		else if(w=='F')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&a);
			totalb=a*50;
		
		}
		else if(w=='P')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&a);
			totalb=a*500;

		}
		else if(w=='S')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&a);
			totalb=a*150;
		}
		else
		{
			printf("Enter the correct letter please\n");
		}
		
		printf("Enter second snack you want to enter: ");
		scanf(" %c",&x);

		if (x=='B')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&b);
			totalf=b*200;
		}
		else if(x=='F')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&b);
			totalf=b*50;
		}
		else if(x=='P')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&b);
			totalf=b*500;
		}
		else if(x=='S')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&b);
			totalf=b*150;
		}
		else
		{
			printf("Enter the correct letter please\n");
		}
			printf("Enter third snack you want to enter: ");
		scanf(" %c",&y);

		if (y=='B')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&c);
			totalp=c*200;
		}
		else if(y=='F')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&c);
			totalp=c*50;
		}
		else if(y=='P')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&c);
			totalp=c*500;
		}
		else if(y='S')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&c);
			totalp=c*150;
		}
		else
		{
			printf("Enter the correct letter please\n");
		}
		
			printf("Enter fourth snack you want to enter: ");
		scanf(" %c",&z);

		if (z=='B')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&d);
			totals=d*200;
		}
		else if(z=='F')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&d);
			totals=d*50;
		}
		else if(z=='P')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&d);
			totals=d*500;
		}
		else if(z='S')
		{
			printf("Enter the quantity: ");
		    scanf("%d",&d);
			totals=d*150;
		}
		else
		{
			printf("Enter the correct letter please\n");
		}
				printf("You have ordered!\n");
		if (w=='B')
    	printf("\n%d Burgers value %d ",a,totalb);
    	else if (w=='F')
	    printf("\n%d French Fries value %d",a,totalb);
	    else if (w=='P')
	    printf("\n%d Pizza value %d",a,totalb);
	    else if (w=='S')
	    printf("\n%d Sandwitches value %d",a,totalb);

		
		if (x=='B')
    	printf("\n%d Burgers value %d ",b,totalf);
    	else if (x=='F')
	    printf("\n%d French Fries value %d",b,totalf);
	    else if (x=='P')
	    printf("\n%d Pizza value %d",b,totalf);
	    else if (x=='S')
	    printf("\n%d Sandwitches value %d",b,totalf);

	    
	    
	    		
		if (y=='B')
    	printf("\n%d Burgers value %d ",c,totalp);
    	else if (y=='F')
	    printf("\n%d French Fries value %d",c,totalp);
	    else if (y=='P')
	    printf("\n%d Pizza value %d",c,totalp);
	    else if (y=='S')
	    printf("\n%d Sandwitches value %d",c,totalp);

		
		if (z=='B')
    	printf("\n%d Burgers value %d ",d,totals);
    	else if (z=='F')
	    printf("\n%d French Fries value %d",d,totals);
	    else if (z=='P')
	    printf("\n%d Pizza value %d",d,totals);
	    else if (z=='S')
	    printf("\n%d Sandwitches value %d",d,totals);
	    totalg=totalf+totalb+totals+totalp;
	    printf("\nyour total is: %d",totalg);
	    printf("\nThank you for your order, have a nice day");

	
		
	}

	else 
	
	{
		printf("Sorry we have ony 4 items,enter letters B,F,S,P only");
	}

}

