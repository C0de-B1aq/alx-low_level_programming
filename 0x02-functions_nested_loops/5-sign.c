#include "main.h"

/**
 * print_sign - function that prints signs
 *
 * @n: parameter of function.
 *
 * Return: Always 1, 0 and -1 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
