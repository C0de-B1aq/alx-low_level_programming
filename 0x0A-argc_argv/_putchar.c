#include "main.h"
#include <unistd.h>

/**
 * _putchar - print char function
 *
 * Return: 0 (ssuccess)
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
