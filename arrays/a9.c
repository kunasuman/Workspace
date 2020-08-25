#include <stdio.h>
void main()
{

	int i, j, a, n, nubr[30];
	printf("Enter the value of N \n");
	scanf("%d", &n);

	printf("Enter the numbers \n");
	for (i = 0; i < n; ++i)
		scanf("%d", &nubr[i]);

	for (i = 0; i < n; ++i) 
	{

		for (j = i + 1; j < n; ++j)
		{

			if (nubr[i] > nubr[j]) 
			{

				a =  nubr[i];
				nubr[i] = nubr[j];
				nubr[j] = a;

			}

		}

	}

	printf("The sort nubers \n");
	for (i = 0; i < n; ++i)
		printf("%d\n", nubr[i]);

}
