#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program print the alphabet in reverse'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char rev;

	for (rev = 'z' ; rev <= 'a'; rev--)
		putchar (rev);

	putchar('\n');

	return (0);
}
