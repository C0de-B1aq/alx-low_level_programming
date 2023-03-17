#include "main.h"
#include <unistd.h>

/**
 * _putchar - print char function
 *
 * Return: 1 (ssuccess) and
 * -1 on error
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
