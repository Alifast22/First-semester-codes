 #include <stdio.h>
 void main()
 {
 int i, j, num, store, sal[12],sum,avg,pos;
 char month[12][100]=
{"January","February","March","April","May","June","July","August","September","October","November","December"};
 printf("Enter the number of months you want to enter \n");
 scanf("%d", &num);
 for(i=0;i<num;i++)
 {
 printf("Enter the salary for %s \n",month[i]);
}
 for (i = 0; i < num; ++i)


 scanf("%d", &sal[i]);
 for (i = 0; i < num; ++i)
 {
 for (j = i + 1; j < num; ++j)
 {
 if (sal[i] > sal[j])
 {
 store = sal[i];
 sal[i] = sal[j];
 sal[j] = store;
 }
 }
 }
 printf("Arranged salary is \n");
 for (i = 0; i < num; ++i)
 printf("%d\n", sal[i]);

for(i=0; i<num ;++i)
{
sum=sum+sal[i];
}
avg=sum/i;
printf("The total salary is %d\n",sum);
printf("The average salary is %d\n",avg);
}
