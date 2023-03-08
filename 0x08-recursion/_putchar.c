#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints the element of a function and display in std output.
 *
 * @ch: int var to print
 *
 * Return: 1 on success
 * If error, return -1, and errno set
 */

int _putchar(char ch)
{
	return(write(1,&ch,1));
}
