
#include<stdio.h>

void main()
{
	int a,b,c;

	printf("enter the vals are:\n");
	scanf("%d%d%d",&a,&b,&c);

	if ((a+b) > c)
	{	
		if ((b+c) > a)
		{
			if((c+a) > b)
			{		
				printf("valid tringle");
			}

			else
			{
				printf("not valid");
	
			}
		}
		else
		{
			printf("not valid");
		}
	}
	else
	{
		printf("not valid");
	}
	
}
