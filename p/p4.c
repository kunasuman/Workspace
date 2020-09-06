#include<stdio.h>

void main()
{
	int i,a[5];
	printf("enter the elemnts :");

	i=0;
	while(i<5)
	{
		scanf("%d",&a[i]);
		i++;
	}
	int *p;
	p=&a[0];
	
	i=0;
	while(i<5)
	{
		printf("arry values %d\n",*p);
		p++;
		i++;
	}
	
}
