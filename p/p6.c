#include<stdio.h>

void main()
{
	int i,a[5];	
	
	printf("enter the values arrays :\n");

	i=0;
	while(i<5)
	{
		scanf("%d",&a[i]);
		i++;
	}
	int *p,sum=0;
	p=&a[0];
	
	i=0;
	while(i<5)
	{	
		sum = sum + *p;
		p++;
		i++;
	}
	printf("sum =%d\n",sum);
}
