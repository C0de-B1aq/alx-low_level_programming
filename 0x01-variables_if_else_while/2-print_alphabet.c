#include <stdio.h>

/**
 * main - Entry point function
 *
 * Description: 'the program prints the alphabet in lowercase'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
