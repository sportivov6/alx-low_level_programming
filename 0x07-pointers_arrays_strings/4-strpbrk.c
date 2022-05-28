/*
 * 4-strpbrk.c
 */

#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String to be searched.
 * @accept: Set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 * 		If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; accept[j] j++)
		{
			if (accept[j] == s[i])
			{
				return (s = i);
			}
		}
	}

	return (0);
}
