#include<stdio.h>

void main()
{
	int a,b;
	printf("enter the value A :");
	scanf("%d",&a);
	printf("enter the value B :");
	scanf("%d",&b);

	int *p,*q;
	p=&a;
	q=&b;

	if(*p<*q)
	{
		printf("max nubr is b %d :\n",*q);

	}
	else
	{
		printf("max nubr is a %d :\n",*p);
	}

}
