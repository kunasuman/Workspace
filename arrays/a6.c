
/* Number of Even elements in an Array */

#include <stdio.h>

void main()
{

	int i, n, even, odd;
	int a[10];

	printf("Enter elements in array: ");

	i=0;
	while(i < 10)
	{
		scanf("%d", &a[i]);
		i++;
	}
	even = 0;
	odd  = 0;
	i=0;
	while(i < 10)
	{

		if(a[i]%2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		i++;
	}

	printf("Total even elements: %d\n", even);
	printf("Total odd elements: %d\n",odd);


}
