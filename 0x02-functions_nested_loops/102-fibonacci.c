#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 0, num2 = 1, fibn = 0, count = 50;
	{
		printf("%d,%d", num1, num2);
	}
	for (count = 3; count <= 50; count++)
	{
		fibn = num1 + num2;

		printf("%d", fibn);

		num1 = num2;
		num2 = fibn;

		if (count != 50)
		{
			printf(", ");
		}
		else
			printf("\n");
	}
}
