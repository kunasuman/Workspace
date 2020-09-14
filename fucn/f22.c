#include<stdio.h>

void nubrs(int);

void main()

{
	int n,i;
	printf("enter the value :\n");
	scanf("%d",&n);
	
	 nubrs( n);
}

void nubrs (int var)
{
//nt n;
//	i=n-1;
	while(var>=1)
	{
		printf("%d\n",var);
		var--;
	}	
	
}

