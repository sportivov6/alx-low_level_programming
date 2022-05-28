/*
 * 3-strspn.c
 */

#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String to be searched.
 * @accept: Prefix to be measured.
 *
 * Return: Number of bytes in s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (count != i)
			break;

		for (j = 0; accept[j] !='\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	
	return (count);
}

