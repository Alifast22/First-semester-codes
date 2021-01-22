#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>
#include<conio.h>
#include<string.h>
		
reverse_of_string(int size,char word[])
{
	int count=0,i,j;

	for(j=0;j<size;j++)
		{
			if(word[0+j]==word[size-1-j])
			{
				count=count+1;
				
			}
			else
			{

				break;
				
			}
		
		}
	if (count==size)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome\n");		
		
	}

	
}
	


main()
{
	int i,j,count=0,size;
	char word[size];

	printf("Enter the string : ");
	gets(word);
	
	printf("Enter the size of string : ");
	scanf("%d",&size);	
	
	reverse_of_string(size,word);
}

