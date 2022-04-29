#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Address to a string of 0 and 1 chars.
 * Return: unsigned int.
 **/
unsigned int binary_to_uint(const char *b)
{
	int i, mult = 1, len = 0, num = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			len++;

		else
			return (0);
	}

	for (len -= 1; len >= 0; len--, mult *= 2)
	{
		if (b[len] == '1')
			num += 1 * mult;
	}

	return (num);
}
