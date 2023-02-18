#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point function
 *
 * Description: ' prints the alphabet in lowercase except q && e'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
