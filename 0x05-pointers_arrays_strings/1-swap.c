/*
 * * File: 1-swap.c
 */

#include "main.h"
/**
 * Swap the value of two integers.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
