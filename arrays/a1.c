

#include<stdio.h>

void main()
{
   
    int n, sum = 0, c, array[5];

    printf("Enter the number of: ");
    scanf("%d", &n);

    printf("Enter %d integers \n\n", n);

   //for(c = 0; c < n; c++)
    //{
      //  scanf("%d", &array[c]);
       //sum += array[c];    
   //
	c=0;
    while(c<n)
		    {
			scanf("%d",&array[c]);
	    		sum =sum+array[c];		
		    	c++;
		    }

    printf("\nSum = %d\n\n", sum);
    
    
}
