#include<stdio.h>

int main()
{
	int second;
	printf("How many seconds have passed?\n");
	scanf_s("%d", &second);

	int secondInLastMinute;
	secondInLastMinute = second % 60;
	printf("%d second have passed of last minute", secondInLastMinute);
	return 0;
}