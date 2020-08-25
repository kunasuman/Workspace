
/* Sum of all even elements in Array */

#include<stdio.h>

int main()
{
	int n, i, a[10];
	int even = 0, odd = 0;

	printf("\nPlease Enter the Array Elements\n");

	for(i = 0; i < 10;i++)
	{
		scanf("%d", &a[i]);
	}

	for(i = 0; i < 10; i ++)
	{
		if(a[i] % 2 == 0)
		{
			even = even + a[i];
		}
		else
		{
			odd = odd + a[i];
		}
	}

	printf("\n The Sum of Even Numbers in this Array = %d ", even);
	printf("\n The Sum of Odd Numbers in this Array = %d ", odd);

}
