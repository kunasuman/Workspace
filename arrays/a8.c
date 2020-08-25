#include<stdio.h>

void main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={2,4,1,7,5};
	int c;
	int co[10],x,y;
	int count=0;
	for(x=0;x<5;x++)
	{
		for(y=0;y<5;y++)
		{
			if(a[x]==b[y])
			{
				co[count]=b[y];
				count++;
			
			}
		
		}
		printf("total element\n",count);
	
	}


}
