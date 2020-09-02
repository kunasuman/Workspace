#include<stdio.h>

void main()
{
	int i;
//	printf("enter the value :");
//	scanf("%d",&n);
	int a[5];
	printf("enter the values of arrys :");
	i=0;
	while(i<5)
	{
		scanf("%d",&a[i]);
		i++;
	}
	int sum=0,*s;
	s=&a[0];
	//sum = 0;
	i=0;
	while(i<5)
	{
		sum = sum + *s;
	//s++;
		i++;
		s++;	
	}
	printf("sum %d\n",sum);

}
