#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
		
char reverse(int len,char arr[])
{
	int i;
	for(i=len-1;i>=0;i--)
	{
	
		printf(" %c",arr[i]);
		
		
	}
	return arr[i];

}

main()
{
	int i,size;	
	char name[size];	
    printf("Enter a string :");
    gets(name);	
    
	printf("Enter the size of string :");
	scanf("%d",&size);
	reverse(size,name);    	


	
}

