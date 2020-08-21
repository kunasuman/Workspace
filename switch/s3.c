
#include<stdio.h>

void main()
{
	int id = 165;
	int pass = 10384;

	printf("enter the id\n");
	scanf("%d",&id);

	switch(id)
	{
	 	case 165 :
			printf("enter the pass  \n");
			scanf("%d",&pass);
			//break;

		switch(pass)
		{
			case 10384 :
				printf("corrct id and pass\n");
				//scanf("%d",&pass);
				return;
		}	
			
		default :
			printf("enter the vaild id or pass\n");
			break;
	}
}
