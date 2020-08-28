
/* Sorting an Array */

#include <stdio.h>

#define as  10  /* Array Size */

void main()
{
	int i, j, a, nubr[as];

	printf("Enter the numbers: \n");
	for (i = 0; i < as; ++i)
	{
		scanf("%d", &nubr[i]);
	}

	for (i = 0; i < as; ++i)
	{
		for (j = i + 1; j < as; ++j)
		{
			if (nubr[i] > nubr[j]) 
			{
				a =  nubr[i];
				nubr[i] = nubr[j];
				nubr[j] = a;
			}
		}
	}

	printf("The sort nubers: \n");
	for (i = 0; i < as; ++i)
	{
		printf("%d\n", nubr[i]);
	}
}
