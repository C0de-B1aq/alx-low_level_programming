#include "main.h"

/**
 * puts2 - prints only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	int y = 0;
	char *z = str;
	int x;

	while (*z != '\0')
	{
		z++;
		longi++;
	}
	y = longi - 1;
	for (x = 0 ; x <= y ; x++)
	{
		if (x % 2 == 0)
	{
		putchar(str[x]);
	}
	}
	putchar('\n');
}
