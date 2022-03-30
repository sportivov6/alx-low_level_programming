/*
 * 100-set_string.c
 */

#include "main.h"

/**
 * set_string - Sets value of a pointer to a char.
 * @s: The pointer
 * @to : Char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
