#include<stdio.h>

void main()
{
	int i,j,a[5],b[5];
	printf("enter the  A array value :\n");
	i=0;
	while(i<5)
	{
		scanf("%d",&a[i]);
		i++;
	}
	printf("enter the  B array value :\n");
	j=0;
	while(j<5)
	{
		scanf("%d",&b[j]);
		j++;
	}
	
	int *p,*q;
	p=&a[0];
	q=&b[0];

	printf("common elemnts \n");
	i=0;
	while(i<5)
	{
		j=0;
		while(j<5)
		{
			if(*p==*q)
			{
				printf("%d",*p);
			}
		q++;		
		j++;
		}
	p++;	
	i++;
	}
	printf("%d",*p);
}
