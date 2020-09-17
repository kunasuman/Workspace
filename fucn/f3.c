//sum of power of natural nubers
#include <stdio.h>
int f(int,int);
void main()
{
	int n,p,res;
	printf("input the number of limit : ");
	scanf("%d",&n);
	printf("enter the nubr of power : ");
	scanf("%d",&p);
	res=f(n,p);
	printf("sum of cubs are %d\n",res );

}
int f(int a,int b)
{
	int sum =0,i,res;
	i=1;
	while(i<=a)
	{
		sum = sum+(i*i*i);
		i++;
	}
//	printf("sum of cubs are %d\n",sum);
	return res;
}
