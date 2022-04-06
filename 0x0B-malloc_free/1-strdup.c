/**
 * 1-strdup.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * strdup - allocate a string.
 * @str: string.
 *
 * Return: pointer to string if success.
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *str1;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++);
		len++;

	str1 = malloc(sizeof(char) * (len + 1);

	if (str1 == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		str1[i] = str[i];
	
	str1[len] = '\0';

	return (str1);
}
