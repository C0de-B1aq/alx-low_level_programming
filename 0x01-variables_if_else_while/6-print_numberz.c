#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point function
 *
 * Description: 'the program prints all single digit numbers of base 10'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int num;

        for (num = 0; num < 10; num++)
                putchar(num % 10) + '0';

        putchar('\n');

        return (0);
}
