#include<stdio.h>
void main()
{

	int i,j;
	int a[5];
	int temp;

	printf("enter the values arays \n");
	i=0;
	while(i<5)
	{
		scanf("%d",&a[i]);
		i++;
	}

	i=0;
	j=4;	
	// 5 7 13 6 2 
	while(i < j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	//	printf("%d ",temp);
		i++;
		j--;
	}

	printf("rvsr elemnts\n");
	i=0;
	while(i<5) 
	{
		printf("%d ",a[i]);
		
		i++;
	}	
	  printf("\n");
}
