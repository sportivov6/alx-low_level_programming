/*
 * 2-args.c
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * main - print argv arguments received.
 * @argc: array length.
 * @argv: array of pointers.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	while (*(argv))
	{
		printf("%s\n", *(argv));
		argv++;
	}

	return (0);
}
