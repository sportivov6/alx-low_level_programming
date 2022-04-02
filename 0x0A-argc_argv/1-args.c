/*
 * 1-args.c
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints the number of arguments.
 * @argc: array length.
 * @argv: array.
 *
 * Return: 0.
 */
int main(int argc, char *argv[]_attribute_((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
