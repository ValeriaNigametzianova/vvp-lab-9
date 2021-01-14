#include <stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "rus");

	int year;
	int century;
	printf("Введите номер года: ");
	scanf_s("%d", &year);

	if ((year / 100 + 1) < 0)
	{
		century = (year / 100 - 1) * (-1);
		printf("%d год относится к %d веку до н.э", year, century);
	}
	else
	{
		century = (year / 100 + 1) ;
		printf("%d год относится к %d столетию", year, century);
	}
	
	return 0;
}