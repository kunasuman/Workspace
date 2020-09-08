#include<stdio.h>

void main()
{
	int *p,a[5],temp=0;
	printf("entr the arry elemnts \n");

	p=&a[0];
	while(p< &a[5])
	{
		scanf("%d",p);
		p++;
	}

	p=&a[0];

	while(p < &a[5])
	{
		if(*p>temp)
		{
			temp=*p;	
			
		}
		p++;
	}
	printf("grst nubr is %d\n",temp);
}
