#include<stdio.h>

void main()
{
	int i,j,a[5],b[5];
	int *p,*q;

	printf("enter the  A array value :\n");

	p=&a[0];
	while(p < &a[5])
	{
		scanf("%d",p);
		p++;
	}
	printf("enter the  B array value :\n");

	q=&b[0];
	while(q < &b[5])
	{
		scanf("%d",q);
		q++;
	}
	
	p=&a[0];
//	q=&b[0];

	printf("common elemnts \n");
	p=&a[0];
	while(p<&a[5])
	{
		q=&b[0];
		while(q < &b[5])
		{
			if(*p==*q)
			{
				printf("%d\n",*p);
			}
			q++;		
		}

		p++;
	}
}
