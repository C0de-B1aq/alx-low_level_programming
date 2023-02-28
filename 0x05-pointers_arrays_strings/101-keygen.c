#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that generates random valid passwords for
 * the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pswd[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pswd[i] = rand() % 80;
		sum += (pswd[i] + '0');
		putchar(pswd[i] + '0');
		if ((2772 - sum) - '0' < 80)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
