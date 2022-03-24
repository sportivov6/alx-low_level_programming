/**
 * 2-strncpy.c
 */

#include "main.h"

/**
 * _strncpy _ Copy a string
 * @dest: THe destination value
 * @src: source value
 * @n: Copy limit
 *
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	return (dest)
}
