/*
 * File 3-puts.c
 */

#include "main.h"

/**
 * Prints a string to stdout
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
