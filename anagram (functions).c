#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
int Anagram(char word_1[],char word_2[])
{
int i,j,count;
for(i=0;i<6;i++)
{
	for(j=0;j<6;j++)
	{
		if(word_1[i]==word_2[j]  )
		{
			
			count=count+1;
			break;
		}
}
}

if (count==6)
{
	printf("%s and %s are Anagrams",word_1,word_2);
	
}
else
{
	printf("%s and %s are Not Anagrams",word_1,word_2);
}

}	


main()
{
	int i,j,count;
			
    char word_1[6],word_2[6];
    printf("Enter the first string : ");
    gets(word_1);
    puts(word_1);
    printf("Enter the second string: ");
    gets(word_2);    
    puts(word_2);
    
    Anagram(word_1,word_2);


}

