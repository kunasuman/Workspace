//write a fuction that power of a nuber 

#include<stdio.h>

void callfuction(int,int);
void main()
{
	int pow,base;
	printf("enter the base :");
	scanf("%d",&base);
	printf("enter the power :");
	scanf("%d",&pow);

	callfuction(base , pow);

}
void callfuction(int c,int a)
{
	int res=1;
	while(a>0)
	{
		res = res *c;
		a--;
	}
	printf("resu %d\n",res);

}
