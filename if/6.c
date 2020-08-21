#include<stdio.h>

void main()
{
	int month;

	printf("enter the month :\n");
	scanf("%d",&month);
	
	if(month==1 || month==3 || month==5 ||month==7 || month==8 || month==10 || month==12 )
	{
		printf("this month is 31days");
	}
	else if  (month==4 || month==6 || month==9 || month==11)
	{
		printf("this month is 30days");
	}
	else if (month==2)
	{
		printf("this month is 28 r 29 dys");
	}
	else
	{
		printf("enter vaild nubr");
	}

}
