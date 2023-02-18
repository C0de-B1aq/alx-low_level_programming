#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point function
 *
 * Description: 'the program prints all possible combinations of two two-digit numbers'
 *
 * Range 0-99 fo the two twp-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
			{
				if (a < b)
				{
					putchar((a / 10) + 48);
					putchar((a % 10) + 48);

					putchar(' ');

					putchar((b / 10) + 48);
					putchar((b % 10) + 48);

					if (a != 98 || b != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	}

	putchar('\n');

	return (0);
}
