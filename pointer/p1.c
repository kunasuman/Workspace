
#include<stdio.h>

void main()
{

	int a;
	int b;
	int c;
	int *p,*q,*r;
	int sum;
	printf("entr the value a :");
	scanf("%d",&a);
	printf("entr the value b :");
	scanf("%d",&b);
	printf("enter the value c :");
	scanf("%d",&c);

	p=&a;
	q=&b;
	r=&c;

	sum= *p+ *q + *r;
	printf("sum %d\n",sum);


}
