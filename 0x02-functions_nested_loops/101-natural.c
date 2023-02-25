#include <stdio.h>
/**
 * main - prints multiples of 5 or 3 followed by a line
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int a;
	int sum;

	sum = 0;

	for (a = 0 ; a < 1024 ; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum = sum + a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
