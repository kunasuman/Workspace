#include<stdio.h>
int fucn( int *);
int rvr (int *);
void main()
{
	int nubr[6],i,x,y;
	printf("enter the nuber is :\n");
	i=0;
	while(i<6)
	{
		scanf("%d",&nubr[i]);
		i++;
	}
	fucn(nubr);
//	x=fucn(nubr);
//	printf("%d\n",x);
	rvr(nubr);
//	y=rvr(nubr);
//	printf("rvrs nubr :%d\n",y);
}
int fucn ( int *nubr)
{
	int i,j,a,x;
	i=0;
	while(i<6)
	{	
		j=i+1;
		while(j < 6)
		{
			if (nubr[i] > nubr[j])
			{
				a =  nubr[i];
				nubr[i] = nubr[j];
				nubr[j] = a;
			}
			j++;
		}
		i++;
	}
	printf("sort nubrs :\n");
	i=0;
	while(i<6)
	{
		printf("%d\n", nubr[i]);
		i++;
	//	return x;
	}
}

int rvr (int *nubr)
{
	printf("rvrs arry :\n");
	int i,j,a,y;
	i=0;
	j=5;
	while(i<j)
	{
		a=nubr[i];
		nubr[i]=nubr[j];
		nubr[j]=a;
	//	printf("%d",nubr[i]);
		i++;
		j--;
	}
	i=0;
	while(i<6)
	{
		printf("%d\n",nubr[i]);
//		return y;
		i++;
	}
}
