#include <stdio.h>
#include <string.h>

int freq(char name[],int count,int i)
{
	if(i==strlen(name)-1)
	{
		return count;
	}
	
	if(name[i]==name[i+1])
	{
		count=count+1;
	}
	i++;
	
	freq(name,count,i);
}


main()

{
	int count=0,i=0,z;
	char name[100];
	printf("Enter a word of sentence :");
	gets(name);
	
	z=freq(name,count,i);
	
	printf("%d",z);


}


