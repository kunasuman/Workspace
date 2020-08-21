#include<stdio.h>
void main()
{
	int a,b,c;

	printf("enter the values\n");
	scanf("%d%d%d",&a,&b,&c);
 
	if((a == b) && (b == c) && (c == a))
	{
		printf("the angleas are eqil \n"); 	
	}
	else if(((a!=b) && (a==c)) || ((a==b) && (a!=c)) || ((c!=a) && (c==b)))
	{
		printf("the angles are isol \n");
	}
	else 
 	{
		printf("the angles are scalne");
	}
}
