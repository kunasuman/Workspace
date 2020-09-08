#include<stdio.h>
void suman(int,int,int);
void main()
{

	int a;
	int b;
	int c;

	printf("entr the value a :");
	scanf("%d",&a);
	printf("enet the value b :");
	scanf("%d",&b);
	printf("entr the value c :");
	scanf("%d",&c);
	
//	res = a+b+c;
	suman(a,b,c);
//	res =a+b+c;
}

void suman(int a ,int b ,int c )
{
	int res;
	res = a+b+c;		
	printf("sum a,b,c %d\n",res);

}

