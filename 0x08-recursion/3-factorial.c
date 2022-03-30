/*
 * 3-factorial.c
 */

#include "main.h"

/**
 * factorial - calculates the factorial of n.
 * @n: integer to use.
 *
 * Return: int.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
