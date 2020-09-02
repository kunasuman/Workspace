#include<stdio.h>

void main()
{
	int i,arr[5];
	printf("enter the arry elemts  :\n");
	i=0;
	while(i<5)
	{
		scanf("%d",&arr[i]);
		i++;	
	}
	
	int *m,temp=0;
	m = &arr[0];
	i = 0;
	while(i<5)
	{
		if(*m>temp)
		{
			temp=*m;
	//		printf("max is %d\n",*m);
			
		}
		m++;
		i++;
	}
	printf("max is %d \n",temp);
}
