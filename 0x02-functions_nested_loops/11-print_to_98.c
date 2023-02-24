#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: function parameter.
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int a;

	if (n >= 0 && n <= 98)
	{
		for (a = n ; a < 98 ; a++)
		{
			printf("%d, ", a);
		}
		printf("98, \n");
	}
	else if (n < 0)
	{
		for (a = n ; a < 98 ; a++)
		{
			printf("%d, ", a);
		}
		printf("98, \n");
	}
	else if (n > 98)
	{
		for (a = n ; a > 98 ; a--)
		{
			printf("%d, ", a);
		}
		printf("98, \n");
	}
	else if (n == 98)
		printf("%d, ", n);
}
