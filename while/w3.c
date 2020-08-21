#include<stdio.h>
void main()
{
	int nubr;
	int fac =1;
	printf("enter the nubr\n");
	scanf("%d",&nubr);
	

	fac=1;

	while(fac<=nubr)
	{
	
		while((nubr%fac)==0)
		{
		printf("%d\n",fac);
		break;
		}
		fac++;
		
	}


}
