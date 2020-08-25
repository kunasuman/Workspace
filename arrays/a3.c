#include <stdio.h>

void main()
{
	int arr1[5], arr2[5], arr3[10];
	int s1, s2, s3;
	int i, j, k;

	printf("enetr the nuber of array1 :");
	scanf("%d",&s1);

	printf("elements in the array :\n");

	for(i=0;i<s1;i++)
	{

		scanf("%d",&arr1[i]);
	}


	printf("enter the nuber of elents array2 :");
	scanf("%d",&s2);

	printf(" elements in the array :\n");

	for(i=0;i<s2;i++)
	{

		scanf("%d",&arr2[i]);
	}

	//for (i = 0;i < s1; i++)
	//
	//	arr3[i] = arr1[i] + arr2[i];
	//

	for(i=0;i<s1; i++)
	{
		arr3[i] = arr1[i];
	}
	for(j=0;j<s2; j++)
	{
		arr3[i] = arr2[j];
		i++;
	       	
	}
}
