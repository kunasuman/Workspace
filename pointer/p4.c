#include<stdio.h>
void main()

{

	int n,i;
	int arr[5],*p;
	printf("entr the array elemts :\n");
	i=0;
	while(i<5)
	{
		scanf("%d",&arr[i]);
		i++;
	}
//	int p;
	p=&arr[0];
	i=0;
	while(i<5)
	{
		printf("arrays elmnts are  :%d\n",*p);
		p++;
		i++;
	}
}
