/*
 * 1-memcpy.c
 */

#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory area pointed to by @src into that pointed to by @dest.
 * @dest: Pointer to memory are to copy @src into.
 * @src - Source buffer to copy characters from.
 * @n - Number of bytes to copy from @src.
 *
 * Return: Pointer to the destination buffer @dest.
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
