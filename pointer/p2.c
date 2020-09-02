#include<stdio.h>

void main ()

{
	int a,b;

	printf("enter the value a :");
	scanf("%d",&a);

	printf("entr the value b :");
	scanf("%d",&b);


	int *p,*q;

	p = &a;
	q = &b;

	if(*p<*q)
	{
		printf("max is q %d",*q);
	}
	else
	{
		printf("max is p %d\n",*p);
	
	}
}
