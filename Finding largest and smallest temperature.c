#include <stdio.h>
#include<string.h>
main()
{
int temp[7],lar=0,small=10000,a,i,lard,smad;
char days[7][100]=
{"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
for(i=0;i<7;i++)
{
printf("Enter the temperature of %s: ",days[i]);
scanf("%d",&temp[i]);
a=i-1;
if(temp[i]>lar)
{
lar=temp[i];
lard=i;
}
else if(temp[i]<small)
{
small=temp[i];
smad=i;
}
}
printf("largest temperature is %d on %s and the smallest temperature is %d on %s \n",lar,days[lard],small,days[smad]);
}
