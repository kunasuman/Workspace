//sum of power of natural nubers
#include <stdio.h>
void f(int,int);
void main()
{
	int n,p;
	printf("input the number of limit : ");
	scanf("%d",&n);
	printf("enter the nubr of power : ");
	scanf("%d",&p);
	f(n,p);

}
void f(int a,int b)
{
	int sum =0,i;
	i=1;
	while(i<=a)
	{
		sum = sum+(i*i*i);
		i++;
	}
	printf("sum of cubs are %d\n",sum);

}
