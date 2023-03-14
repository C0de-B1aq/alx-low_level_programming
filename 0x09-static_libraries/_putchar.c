#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - prints the element of a function and display in std output.
 *
 * @c: int var to print
 *
 * Return: 1 on success
 * If error, return -1, and errno set
 */

int _putchar(char c)
{
	return(write(1,&c,1));
}
