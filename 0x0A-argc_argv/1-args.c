/*
 * 1-args.c
 */

#include <stdio.h>

/**
 * main -prints the number of arguments.
 * @argc: array length.
 * @argv: array.
 *
 * Return: 0.
 */
int main(int argc, char _attribute_((_unused_))*argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
