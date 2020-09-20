#include<stdio.h>

void main()
{
	int nubr[6],i,a,j;
	printf("enter the nuber is :\n");
	i=0;
	while(i<6)
	{
		scanf("%d",&nubr[i]);
		i++;
	}
	
	i=0;
	while(i<6)
	{	
		j=i+1;
		while(j < 6)
		{
			if (nubr[i] > nubr[j])
			{
				a =  nubr[i];
				nubr[i] = nubr[j];
				nubr[j] = a;
			}
			j++;
		}

		i++;
	}
	printf("sort nubrs :\n");

	i=0;
	while(i<6)
	{
		printf("%d\n", nubr[i]);

		i++;
	}
}
