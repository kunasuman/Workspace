#include<stdio.h>
void high(int,int);
void main()
{

	int a;
	int b;
	printf("entr the values a :");
	scanf("%d",&a);
	printf("entr the values b :");
	scanf("%d",&b);
	
	high(a,b);

}

void high(int a,int b)
{
	int high;
	if(a<b)
	{
	
		printf("max nubr is b =%d",b);
	}	
	else
	{
		printf("max nubr is a:=%d",a);
	}
	

}
