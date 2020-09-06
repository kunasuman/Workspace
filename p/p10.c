#include<stdio.h>

void main()
{
	int i,j,a[5],b[5],c[10];
	printf("enter the value A :");
	i=0;
	while(i<5)
	{
		scanf("%d",&a[i]);
		i++;
	}
	printf("enter the value B :");
	j=0;
	while(j<5)
	{
		scanf("%d",&b[j]);
		j++;
	}
	int *p,*q,*r;
	p=&a[0];
	q=&b[0];
	r=&c[0];
	i=0;
	while(i<5)
	{
		*r=*p;
		i++;
	}
	j=0;
	while(j<5)
	{
		*r=*q;
		j++;
	}
	printf("coppy pointer elmnts\n",);
	i=0;
	while(i<10)
	{
		printf("%d\n",*r);
		i++;
	}

}
