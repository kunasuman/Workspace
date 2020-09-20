#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void cs(char *,char *);
bool cw(char *,char *);

void main()
{
	char a[]="schools will be reopen very soon";
	char b[50];

	printf("given string : %s\n",a);

	printf("entr a word :");
	gets(b);
	
	cs(a,b);
}
void cs( char *s, char *w)
{
	char *p=s,
	    char *q=w;
	bool res;

	while(*p!='\0')
	{
		res =cw(p,q);
		if(res ==true)
		{
			printf("xct word : %s\n",q);
		}
		while((*p!= ' ')&&(*p!='\0'))
			p++;
		if(*p==' ')
			p++;
	}
}
bool cw(char *p,char *q)
{
	char *p=s,
	    char *q=w;            
	int commnletter=0;
	int len;

	len =strlen(q);
	while((*p!='\0')&&(*p!=' ')&&(*q!='\0')
	{
		if(*p==*q)
		{
			commnletter++;
		
		}
		p++;
		q++;
	}

	if(commnletter==len)
	return true;
	return false;	
}
