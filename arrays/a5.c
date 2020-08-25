#include<stdio.h>

void main()
{
	int i,n;
	int a[i],b[i],c[10];
	//	int i,n
	printf("enter the nubr of elemnts a : \n");
	scanf("%d",&n);

	printf("enter the values a\n");
	i=0;
	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}

	printf("enter the values b\n");
	i=0;
	while(i<n)
	{
		scanf("%d",&b[i]);
		i++;
	}
	printf("a,b values strd in c\n");
	i=0;
	while(i<n)
	{

		c[10]=a[i];
		c[10]=b[i];

		printf("%d",c[i]);
		n++;
	}
}
