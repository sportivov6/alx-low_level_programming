/*
 * 5-sqrt_recursion
 */

#include "main.h"

/**
 * helper - Find a square root of an integer.
 * @n: Integer.
 * @i: Counter.
 *
 * Return: square root (n).
 */
int helper(int i, int n)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (helper(i + 1, n));
}
/**
 * sqrt_recursion - find a square root of an integer.
 * @n: integer.
 *
 * Return: square root (n)
 */
int _sqrt_recursion(int n)
{
	int a = 1;

	if (n < 1)
		return (-1);

	return (helper(a, n));
}
