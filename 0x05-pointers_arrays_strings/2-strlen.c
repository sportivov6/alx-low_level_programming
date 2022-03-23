/**
 * File 2-strlen.c
 */

#include "main.h"

/**
 * Return the lenght of a string
 *
 * Return: Lenght of @str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
