#include<stdio.h>

int rep(char * , char);

void main()
{
	char b[100],ch;
	int c;
	printf("enter the string:");
	gets(b);
	printf("srchd elemnt :");
	scanf("%c",&ch);
	
	c=rep(b,ch);
	printf("reptd letter %d\n:",c);
}
int rep(char *a,char e )
{
	int c=0,i;
	i=0;
	while( a[i]!='\0')
	{
		if(a[i]==e)
		{
	        	c++;
		}
	
	i++;
	}
	return c;
//	printf("reptd letters %d\n :",cnt);

}
