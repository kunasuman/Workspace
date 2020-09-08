#include<stdio.h>

void main()
{
	int *p,a[5];
	printf("enter the elemnts :");

	p=&a[0];
	while(p < &a[5])
	{
		scanf("%d",p);
		p++;
	}

	p=&a[0];
	
	p=&a[0];
	while(p < &a[5])
	{
		printf("arry values %d\n",*p);
		p++;
	}
	
}
