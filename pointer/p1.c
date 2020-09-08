#include<stdio.h>

void main()
{
	int a,b,c;

	printf("enter the value of A :");
	scanf("%d",&a);
	printf("enter the value of B :");
	scanf("%d",&b);
	printf("enter the value of C :");
	scanf("%d",&c);

	int *p,*q,*r;
	p=&a;
	q=&b;
	r=&c;	
	int sum=0;

	sum = *p + *q + *r;
	printf("sum =%d\n",sum );


}
