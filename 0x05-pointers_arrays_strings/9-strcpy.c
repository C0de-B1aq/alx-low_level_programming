#include "main.h"

/**
 * char *_strcpy - the function copies the string pointed to by src
 * @dest: copy to this
 * @src: copy from this
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (x = 0 ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
