#include "main.h"
#include <stdlib.h>

/**
 * create_array - allocate an array.
 * @size: size of arrray.
 * @c: char.
 * Return: pointer to char if success.
 **/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
