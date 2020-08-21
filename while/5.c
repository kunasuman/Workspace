#include<stdio.h>

void main()
{
	int n;
	printf(" enter the value of n :");
	scanf("%d",&n);

	while(n!=0)
	{
		printf("%d",n%10);
		n=n/10;

	}
	printf("\n");
}
