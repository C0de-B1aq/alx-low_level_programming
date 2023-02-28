#include "main.h"

/**
 * print_rev - printing a string in reverse.
 *
 * @s: string
 *
 * return: 0 (success)
 */

void print_rev(char *s)
{
	int longi = 0;
	int r;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (r = longi; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
