
#include <stdio.h>

void main()
{
	int a,b;
	int val;
	int total;

	printf("enter the value a=");
	scanf("%d",&a);

	printf("enter the value b=");
	scanf("%d",&b);

	printf("enter 1 for add\n");
	printf("press 2 for sub\n");
	printf("press 3 for sub\n");

	scanf("%d",&val);

	switch(val)
	{
		case 1:
			total= (a+b);
			printf("total=%d\n",total);
			break;
			
		case 2:
			total= (a-b);
			printf("total=%d\n",total);
			break;
	
		case 3:
			total= (a*b);
			printf("total=%d\n",total);
			break;
	
	        default:
			printf("invalid value plz enter crct value\n");
	}



}
