// chek if given input is alphabet or not

#include<stdio.h>

void chek(char);
void main()
{
	char alp,fuc;
	printf("enter the char is :");
	scanf("%c",&alp);

	chek(alp);

}
void chek(char fuc)
{
	char cha=fuc;
	if((cha >= 'A' && cha <= 'Z') || (cha >= 'a' && cha <= 'z'))
	{
		printf("given ltr is [%c] cha\n ",cha);	
	}
	else
	{
		printf("given ltr is [%c] not char\n",cha);
	}
}
