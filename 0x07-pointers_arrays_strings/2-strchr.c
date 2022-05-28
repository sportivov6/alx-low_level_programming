#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s - sting searched
 * @c - character located.
 *
 * Return: If c is found - a pointer to the first occurence.
 * 	   If c is not found - NULL.
 **/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
