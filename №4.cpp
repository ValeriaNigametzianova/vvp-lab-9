#include<stdio.h>

int main()
{
	int A;
	int B;
	int C;
	int quantitySquares;
	int freeSpace;
	printf("Enter A, B, C (in sm): ");
	scanf_s("%d%d%d", &A, &B, &C);
	if ((A <= 0) || (B <= 0) || (C <= 0))
	{
		printf("A, B, C must be more then 0");
	}
	else
	{
		quantitySquares = (A / C) * (B / C);
		freeSpace = A * B - C * C * quantitySquares;
		printf("The qantity of squares is %d\nThe free space in AxB is %d sm", quantitySquares, freeSpace);
	}
	return 0;
}