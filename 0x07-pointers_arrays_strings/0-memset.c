#include "main.h"

/**
 * memset - Fills the first n bytes of the memory area pointed to by @s with the constant byte @c.
 * @S - pointer to the memory area
 * @c - character to fill the memory area with.
 * @n - Number of bytes.
 *
 * Return: Pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
