#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: char variable input
 * Return: 0 (success)
 */

int _strlen(char *s)
{
	int ls = 0;

	while (*s != 0)
	{
		ls++;
		s++;
	}
	return (ls);
}
