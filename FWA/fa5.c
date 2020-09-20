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
	char *p=s;
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
bool cw(char *c ,char *q)
{
	char *r=c;
	char *t=q;            
	int commnletter=0;
	int len;

	len =strlen(q);
	while((*r!='\0')&&(*r!=' ')&&(*t!='\0'))
	{
		if(*r==*t)
			{
			commnletter++;
			}
			r++;
			t++;
	}

		if(commnletter==len)
			return true;
			return false;
}
