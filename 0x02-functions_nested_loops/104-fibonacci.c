#include <stdio.h>

/**
 * main - prints the first 100 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 0, num2 = 1, fibn, count = 100;
	{
		printf("%d", num1);
		printf(", ");
		printf("%d", num2);
		printf(", ");
	}
	for (count = 2; count <= 100; count++)
	{
		fibn = num1 + num2;

		printf("%d", fibn);

		num1 = num2;
		num2 = fibn;
		if (count != 100)
		{
			printf(", ");
		}
		else
		printf("\n");
	}
}
