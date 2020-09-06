#include<stdio.h>

void main()
{
	int i,a[5];
	printf("entr the arry elemnts \n");

	i=0;
	while(i<5)
	{
		scanf("%d",&a[i]);
		i++;
	}
	int *p,temp=0;
	p=&a[0];

	i=0;
	while(i<5)
	{
		if(*p>temp)
		{
			temp=*p;	
			
		}
		p++;
		i++;
	}
	printf("grst nubr is %d\n",temp);
}
