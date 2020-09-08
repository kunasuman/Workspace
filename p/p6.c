#include<stdio.h>

void main()
{
	int a[5];	
	int *p,sum=0;

	printf("enter the values arrays :\n");

	p=&a[0];

	while(p < &a[5])
	{
		scanf("%d", p);
		p++;
	}

//	p=&a[0];
	p=0;
	
	while(p < &a[5]);
	{	
		sum = sum + *p;
		p++;
	
	}
	printf("sum =%d\n",sum);
}
