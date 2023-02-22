#include "main.h"

/**
 * print_alphabet - Entry point, print alphabet function,
 * function return type void.
 *
 * Description: 'the program prints the alphabet'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
