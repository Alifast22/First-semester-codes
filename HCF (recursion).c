#include<stdio.h>

int HCF(int num,int n,int save,int ran)
{
	if(num<n)
	{
	
	if(ran>num)
	{
		return save;
	}
	if(num%ran==0)
	{
	   if(n%ran==0)
	   {
	   	  save=ran;
	   	
	   }	
	
	}
 }
 else if(num>n)
 {
	if(ran>n)
	{
		return save;
	}
	if(num%ran==0)
	{
	   if(n%ran==0)
	   {
	   	  save=ran;
	   	
	   }	
	
	} 	
 	
 }
	ran++;
	HCF(num,n,save,ran);
	
}

main()
{
	int num,n,save=1,ran=1,z;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Enter another number : ");
	scanf("%d",&n);	
	
	z=HCF(num,n,save,ran);
	printf("%d",z);
}



