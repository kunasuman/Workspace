#include<stdio.h>
void main()
{
	int n,i=0,a=0,b=1;
	printf(" enter the nuber :");
	scanf("%d",&n);

	while(n>i)
	{
		printf("%d ",i);
		i=a+b;
		a=b;
		b=i;
	//	i--;
	
	
	}

	printf("\n");

}
