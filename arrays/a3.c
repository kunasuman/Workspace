
/* Append two arrays and copy in third array */

#include <stdio.h>

void main()
{
	int arr1[5], arr2[5], arr3[10];
	int s3;
	int i, j, k;

	printf("elements in the array :\n");

	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}

	printf(" elements in the array :\n");

	for(i=0;i<5;i++)
	{
		scanf("%d",&arr2[i]);
	}

	for(i=0;i<5; i++)
	{
		arr3[i]=arr1[i];
	}
	for(j=0;j<5; j++,i++)
	{
		arr3[i] = arr2[j];
	}

	printf("coppy elements\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr3[i]);
	}
}
