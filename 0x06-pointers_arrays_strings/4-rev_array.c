/**
 * 4-reverse_array
 */

#include "main.h"
#include <stdio.h>

/**
 * reverse array:Reverses the content of an array of integers
 * @a: Array of integers.
 * @n: No. of elements to swap
 *
 * Return: empty.
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
