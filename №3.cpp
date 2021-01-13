#include<stdio.h>

int main()
{
	int K;
	int* Day;
	Day = &K;

	int N;
	int* dayTheFirstOfJanuary;
	dayTheFirstOfJanuary = &N;
	
	printf("Enter number day: ");
	scanf_s("%d", &K);
	printf("Enter number day of week of the 1 January: ");
	scanf_s("%d", &N);

	int numberDayOfWeek;
	numberDayOfWeek = (*Day + *dayTheFirstOfJanuary - 1) % 7;
	printf("Number day of the week: %d. This is ", numberDayOfWeek);

	switch (numberDayOfWeek)
	{
	case 1:
		printf("sundey");
		break;
	case 2:
		printf("mondey");
		break;
	case 3:
		printf("tuesday");
		break;
	case 4:
		printf("wednesday");
		break;
	case 5:
		printf("thursday");
		break;
	case 6:
		printf("friday");
		break;
	case 7:
		printf("saturday");
		break;
	}
	return 0;
}
	