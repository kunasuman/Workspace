#include<stdio.h>
void main()
{

	int day,month,year;

	printf("enter the day    : ");
	scanf("%d", &day);
	printf("enter the month  : ");
	scanf("%d", &month);
	printf("enter the year   : ");
	scanf("%d", &year);
	
	if (day > 31)
	{
		printf("Plear Enter correct day\n");
		return;
	}

	switch (month)
	{
		case 1:
			printf("%d-Jan-", day);
			break;
		case 2:
			printf("%d-Feb-", day);
			break;
		case 3:
			printf("%d-Mar-", day);
			break;
		case 4:
			printf("%d-Apr-", day);
			break;
		case 5:
			printf("%d-May-", day);
			break;
		case 6:
			printf("%d-Jun-", day);
			break;
		case 7:
			printf("%d-Jul-", day);
			break;
		case 8:
			printf("%d-Aug-", day);
			break;
		case 9:
			printf("%d-Sept-", day);
			break;
		case 10:
			printf("%d-Oct-", day);
			break;
		case 11:
			printf("%d-Nov-", day);
			break;
		case 12:
			printf("%d-Dec-", day);
			break;
		default:
			printf("Invalid Month\n");
			return;
	}

	if ((year % 4) == 0)
	{
		printf("%d  (It's a leap year)\n", year);
	}
	else
	{
		printf("%d  (It's not a leap year)\n", year);
	}

}
