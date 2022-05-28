/*
 * 7-print_chessboard.c
 */

#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: Chessboard to be printed.
 * Return: Always 0;
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_puchar('\n');
		}
	}
}
