#include<stdio.h>

int main()
{
	int numberDayOfWeek;
	int day;
	
	printf("Enter number days: ");
	scanf_s("%d", &day);

	numberDayOfWeek = day % 7;
	printf("Number day of the week: %d. This is ", numberDayOfWeek);
	switch (numberDayOfWeek)
	{
		case 0:
			printf("sundey");
			break;
		case 1:
			printf("mondey");
			break;
		case 2:
			printf("tuesday");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("thursday");
			break;
		case 5:
			printf("friday");
			break;
		case 6:
			printf("saturday");
			break;
	}
	return 0;
}
