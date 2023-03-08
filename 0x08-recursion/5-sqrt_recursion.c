#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: calculate the square root of the number
 *
 * Return: the resulting square root number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural square root of a number
 *
 * @n: number to calculate the sqaure root of
 *
 * @i: defined iterator
 *
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}