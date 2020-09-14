#include<stdio.h>

void fact(int);
void main ()
{
	int n,a;
	printf("enter the fac nubr is :");
	scanf("%d",&n);

	fact(n);

}
void fact(int n)
{
	int res=1,b=1;
	while(b<=n)
	{
		res = res *b;
		b++;	
	}
	printf("fact is %d\n",res);

}

