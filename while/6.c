#include<stdio.h>

void main()

{
	int a;
	int r;
	int i,j;
	printf("enrter the nubr ");
	scanf("%d",&a);

	printf("enter the numr of rows   ");
	scanf("%d",&r);
	
	i=1;
	
	while(i<=r)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",a);
		
		}
		printf("\n");
	i++;
	}


}
