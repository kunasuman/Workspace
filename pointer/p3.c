#include<stdio.h>

void main()
{
 	int a,b;
	printf("emntr the value a :");
	scanf("%d",&a);
	printf("entr the value b :");
	scanf("%d",&b);

	int *p,*q,temp;

	p=&a;
	q=&b;
	temp=0;

	temp=*p;
	*p=*q;
	*q=temp;
	printf("swap nubr a is %d\n",*p);
	printf("swap nubr b is %d\n",*q);

}
