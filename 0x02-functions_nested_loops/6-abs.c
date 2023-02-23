#include "main.h"

/**
 * _abs - function prints absolute values.
 *
 * @a: function parameter.
 *
 * Return: Always 'a' (Success)
 */

int _abs(int a)
{
	if (a >= 0)
		a = a;
	else if (a < 0)
		a = -(a);
	return (a);
}
