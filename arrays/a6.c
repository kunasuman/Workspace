#include <stdio.h>
void main()
{
   
    int i, n, even, odd;    int a[i];

    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter // elements in array: ");
    i=0;
    while( i<n)
    {
	    
        scanf("%d", &a[i]);
	i++;
    }
    even = 0;
    odd  = 0;
	i=0;
    while(i<n)
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
