//write a fuction that power of a nuber 

#include<stdio.h>

int callfuction(int,int);

void main()
{
	int pow,base,res;
	printf("enter the base :");
	scanf("%d",&base);
	printf("enter the power :");
	scanf("%d",&pow);

	res=callfuction(base , pow);
	printf("resu %d\n",res);

}
int callfuction(int c,int a)
{
	int res=1;
	while(a>0)
	{
		res = res * c;
		a--;
	}
	return res;
//	printf("resu %d\n",res);

}
