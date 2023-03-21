#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints the chartacter
 *
 * @ch: is the pinted char
 *
 * Return: 1 when succcessful
 * Otherwise -1 on error
 *
 */

int _putchar(int ch)
{
	return (write(1, 0, 1));
}
