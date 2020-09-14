#include<stdio.h>

void chek(char);
void main()
{
	char alp,fuc;
	printf("enter the char is :");
	scanf("%c",&alp);

	chek(fuc);

}
void chek(char fuc)
{
	char cha;
	if((cha >= 'A' && cha <= 'Z') || (cha >= 'a' && cha <= 'z'))
	{
		printf("given ltr is %c cha ",cha);	
	}
	else
	{
		printf("given ltr is %c not char ",cha);
	}
}
