
/* Sum of all elements in Array */

#include <stdio.h>

void main()
{

	int n, sum = 0, c, array[5];

	printf("Enter 5 integers \n\n");

	/* Scan Array Elements */
	c=0;
	while(c<n)
	{
		scanf("%d",&array[c]);
		c++;
	}

	/* Sum all the elements */
	c=0;
	while(c<n)
	{
		sum = sum + array[c];		
		c++;
	}

	printf("\nSum = %d\n\n", sum);


}
