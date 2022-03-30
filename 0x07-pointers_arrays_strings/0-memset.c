/*
 * 0-memset.c
 */

#include "main.h"

/**
 * memset - Fills the first n bytes of the memory area pointed to by @s with the constant byte @c.
 * @S - pointer to the memory area
 * @c - character to fill the memory area with.
 * @n - Number of bytes.
 *
 * Return: Pointer to the memory area @s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
