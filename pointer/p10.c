#include<stdio.h>

void main()
{
	int a[5],b[5],c[10];
	int *p,*q,*r;

	printf("enter the values A :");
	
	p=&a[0];
	while(p < &a[5])
	{
		scanf("%d",p);
		p++;
	}

	printf("enter the value B :");
	
	q=&b[0];
	while(q < &b[5])
	{
		scanf("%d", q);
		q++;
	}
	
	p=&a[0];
	r=&c[0];
	while(p < &a[5])
	{
		*r=*p;
		p++;
		r++;
	}
	
	q=&b[0];
	while(q < &b[5])
	{
		*r=*q;
		q++;
		r++;
	}

	printf("coppy pointer elmnts\n");

	r=&c[0];
	while(r < &c[10])
	{
		printf("%d\n",*r);
		r++;
	}

}
