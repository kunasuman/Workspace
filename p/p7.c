#include<stdio.h>

void main()
{
	int *p,*q,temp,a[5];

	printf("enter the arry elmnt\n");

	p=&a[0];
	while(p < &a[5])
	{	
		//scanf("%d\n",&a[i]);
		scanf("%d",p);
		p++;
	}

	p=&a[0];
	q=&a[4];

	while(p < q)
	{
		temp=*p;
		*p = *q;
		*q = temp;
		p++;
		q--;
	}
	p=&a[0];
	while(p < &a[5])
	{
	
		printf("rvrs of array  %d\n", *p);
		p++;
	}
}
