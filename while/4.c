#include<stdio.h>
void main()
{
	int p,b;
	int total=1;
	printf("enter the base :");
	scanf("%d",&b);
	printf("entyer the power :");
	scanf("%d",&p);

	while(p>0)
	{
	total *=b;
	//total=total*b;
//	printf("%d",total);
	p--;
	}

	printf("%d\n",total);

}
