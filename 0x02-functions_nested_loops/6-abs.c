/*
 * 6-abs.c
 */

#include "main.h"

/**
 * _abs - Compare the absolute value of an integer.
 *
 * Return: The absolute value of an integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else 
		return (-n);
}

