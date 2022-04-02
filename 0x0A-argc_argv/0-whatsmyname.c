/*
 * 0-whatsmyname.c
 */

#include <stdio.h>

/**
 * main - Prints the program name,followed by a new line.
 * @argc: Number of arguments.
 * @argv: Array of pointers
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);

	exit(EXIT_SUCCESS);
}
