/*
 * 0-puts_recursion.c
 */
#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: String to be printed.
 */

void _puts_recursion(char *s)
{
	unsigned int i = 0;

	if (s[i])
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + i);
	}
	else
		_putchar('\n');
}
