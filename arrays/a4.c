#include<stdio.h>
void main()
{

	int i,j;
	int a[5],b[5];

	printf("enter the values arays \n");
	i=0;
	while(i<5)
	{
		scanf("%d",&a[i]);
		i++;
	}



	printf("rvrs ary values: ");

	i=4;
	while(i >= 0)
	{
		printf("%d ",a[i]);
		i--;
	}
	printf("\n");
}
