#include<stdio.h>

void main()

{

	int a,r,i,j;
	printf("enter the nubr  ");
	scanf("%d",&a);

	printf(" enter the row  ");
	scanf("%d",&i);
	
	while(i>0)
	{
		for(j=i; j>0;j--)
		{
		
			printf("%d",a);
		}
		
		printf("\n");
	i--;
//	break;
	}
	printf("\n");
	//break;
}
