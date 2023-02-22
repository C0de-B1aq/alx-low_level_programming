#include "main.h"

/**
 * _islower - a function that searches for lower case alphabet
 *
 * @c: parameter to be printed by program
 *
 * return: 1 if c lowercase
 * and 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
