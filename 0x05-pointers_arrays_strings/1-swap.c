#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: int variable input
 * @b: int variable input
 *
 * Return: 0 (success)
 */

void swap_int(int *a, int *b);
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
