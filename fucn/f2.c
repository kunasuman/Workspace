#include<stdio.h>

void callfuction(int);
void main()
{
	int pow,base,a,c;

	printf("enter the base :");
	scanf("%d",&base);
	printf("enter the power :");
	scanf("%d",&pow);

	callfuction(c);

}
void callfuction(int c)
{
	int res=1;
	while(c>0)
	{
		res = res *c;
		c--;
	}
	printf("resu %d\n",res);

}
