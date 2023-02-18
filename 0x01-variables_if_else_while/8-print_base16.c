#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point function
 *
 * Description: 'prints all the numbers of base 16 in lowercase'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 16; num++)
		putchar((num % 16) + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
