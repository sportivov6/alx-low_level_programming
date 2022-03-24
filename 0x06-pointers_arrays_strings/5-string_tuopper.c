/**
 * 5-string_toupper.c
 */

#include "main.h"

/**
 * string_tuopper: Change lowercase letters to uppercase.
 * @p: String will be modified.
 *
 * Return: char var
 */
char *string_tuopper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <=122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
