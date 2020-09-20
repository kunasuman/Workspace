#include<stdio.h>

void rep(char *);

void main()
{
	char b[100],c;
	int i,cnt;
	printf("enter the string:");
	gets(b);
	printf("srchd elemnt :");
	scanf("%s",&c);
	
	rep(b);
//	printf("reptd letter %d\n:",cnt);
}
void rep(char *a )
{
	int c,i,cnt=0;
	i=0;
	while( a[i]!='\0')
	{
		if(a[i]=c)
		{
	        	cnt++;
		}
	
	i++;
	}
	printf("reptd letters %d\n :",cnt);

}
