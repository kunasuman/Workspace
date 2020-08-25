
#include<stdio.h>

int main()
{
	int n, i, a[10];
	int even = 0, odd = 0;

	printf("\n Please Enter the Size of an Array : ");
	scanf("%d", &n);

	printf("\nPlease Enter the Array Elements\n");
	for(i = 0; i <n;i++)
	{
		scanf("%d", &a[i]);

	}
	for(i = 0; i < n; i ++)
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
