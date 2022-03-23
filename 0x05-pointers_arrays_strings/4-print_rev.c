/*
 * File: 4-print_rev.c
 */

#include "main.h"

/**
 * Prints a string in reverse
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}

