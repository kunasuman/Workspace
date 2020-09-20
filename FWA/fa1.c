#include<stdio.h>

void upper ( char * );

void lower ( char * );

int main()
{
	char a[100];
	int i;
	printf("Enter your text : ");
	gets(a);
	upper(a);
	printf("upper case letter is %s\n",a);
	lower(a);
	printf("lower case letter is %s\n",a);
}
void upper( char *stri)
{
	int i=0;
	while( stri[i]!='\0')
	{

		if(stri[i]>='a' && stri[i]<='z')
		{
			stri[i] = stri[i]- 32;
		}
		i++;
	}
}
void lower ( char *stri)
{
//	printf("Uppercase string : %s\n",stri);
	int i;
	i=0;
	while( stri[i]!='\0')
	{
		if(stri[i]>= 'A' && stri[i]<= 'Z')
		{
		
			stri[i] =stri[i] +32;
		}
		i++;
	
	}
//	printf("lowercase string : %s\n",stri);
}
