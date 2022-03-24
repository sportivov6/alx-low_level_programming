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
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}

