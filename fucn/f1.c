#include<stdio.h>

void evn_odd( int,int);

void main()
{
	int n,i;

	printf("enter the value\n");
	scanf("%d",&n);
	printf("enter o for even, 1 for odd\n");
	scanf("%d",&i);

	evn_odd (n ,i);
}

void evn_odd (int n,int optn)
{
	int i;
	i=1;
	while(i<=n)
	{
		if((i%2 == optn))
			printf("evn nubr is %d\n",i);
//		else
//			printf("odd nubr is %d\n",i);
		i++;
	}

}



