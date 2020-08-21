
#include<stdio.h>

void main()
{
	int unit;
	
	float total;
	 
	printf(" enter the units :");
	scanf("%d",&unit);

	if(unit < 50)
	{
		total = unit * 0.50;

		printf("total chrges are : %f\n",total);
	}
	else if(unit < 100)
	{
		total = unit * 0.75;

		printf("total chrges are :%f\n",total);
	}
	else if (unit < 250)
	{
		total = unit * 1.20;

		printf("total chrges are :%f\n",total);
	}
	else
	{
		total = unit * 1.50;

		printf("total chrges are :%f\n",total);

	}


}
