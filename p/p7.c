#include<stdio.h>

void main()
{
	int i,a[5];
	printf("enter the arry elmnt\n");
	i=0;
	while(i<5)
	{	
		//scanf("%d\n",&a[i]);
		scanf("%d",&a[i]);
		i++;
	}
	int *p,*q,temp;
	p=&a[0];
	q=&a[4];
	i=0;
	while(p<q)
	{
		temp=*p;
		*p = *q;
		*q = temp;
		p++;
		q--;
	}
	i=0;
	while(i<5)
	{
	
		printf("rvrs of array  %d\n",a[i]);
		i++;
	}
}
