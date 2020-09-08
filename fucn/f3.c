
#include<stdio.h>
void suman(int,int,int);

void main()
{
	int a,b,c;
	printf("entr the values a  b  c ");
	scanf("%d%d%d",&a,&b,&c);
	suman(a,b,c);
}

void suman(int a, int b,int c)
{
	int res;
	
	res =a*b*c;
	
	printf("prod %d\n",res);	

}
