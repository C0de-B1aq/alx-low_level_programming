#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 upon success
 */

int main(void)
{
	print("Size of a char: %lu byte(s)"), sizeof(char));
	print("Size of an int: %lu byte(s)"), sizeof(int));
	print("Size of a long int: %lu byte(s)"), sizeof(long int));
	print("Size of a long long int: %lu byte(s)"), sizeof(long long int));
	print("Size of a float: %lu byte(s)"), sizeof(float));
	return (0);
}
