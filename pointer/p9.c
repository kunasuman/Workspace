#include<stdio.h>

void main()
{
	int i,j,a[5];

	printf("enter the values \n");

	i=0;
	while(i<5)
	{
		scanf("%d",&a[i]);
		i++;
	}
	int *p,*q,temp;
	p=&a[0];
	i=0;
	while(i<5)
	{
		q=&a[0];
		j=0;
		while(j<5)
		{
			if(*p>*q)
			{
				temp=*p;
				*p=*q;
				*q=temp;

			}	
			j++;
			q++;
		}
		i++;
		p++;
	}	
	printf("sort elemnts :\n");
	i=0;
	p=&a[0];
	while(i<5)
	{
		printf("%d\n",*p);
		i++;
		p++;
	}

}
