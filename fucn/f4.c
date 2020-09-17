//print factroial nuber

#include<stdio.h>

int fact(int);
void main ()
{
	int n,a,res;
	printf("enter the fac nubr is :");
	scanf("%d",&n);

	res=fact(n);
	printf("fac is %d\n",res);
}
int fact(int n)
{
	int res=1,b=1;
	while(b<=n)
	{
		res = res *b;
		b++;	
	}

	return res;
//	printf("fact is %d\n",res);

}

