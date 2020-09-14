#include<stdio.h>

void e( int );


void main()
{
	int n,i;

	printf("enter the value\n");
	scanf("%d",&n);

	e (n );
}

void e (int n)
{
	int i;
	printf("entyer the n value of nubrs\n");
	i=1;
	while(i<=n)
	{
		if((i%2 ==0))
		{
			printf("nubr is even %d\n",i);
		}

		if(i%2==1)
		{

			printf("nubr is odd %d\n",i);
		}
		i++;
	}

}



