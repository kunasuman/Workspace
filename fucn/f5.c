// permutation and combiation 

#include<stdio.h>
int fact(int);
int per(int,int);
int com(int,int);
void main ()
{
	int a,b;
	int res_p,res_c;

	printf("enter the a value :");
	scanf("%d",&a);
	printf("enter the b value :");
	scanf("%d",&b);
	res_p=per(a,b);
	res_c=com(a,b);
	printf("%d per\n",res_p);
	printf("%d com\n",res_c);
}
int com( int n , int r)
{
	int res;
	res=fact(n)/(fact(n-r) *fact(r));
	return res;

}
int per(int n,int r)
{
	int res;
	res=fact(n)/fact(n-r);
	return res;
}
int fact(int x)
{
	int i=1;
	int sum =1;
	while(i<=x)
	{
		sum = sum * i;
		i++;
	}
	return sum;
}
