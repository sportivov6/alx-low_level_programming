#include "main.h"

/**
 * append_text_to_file - Function that adds text to an existing file, if it is possible to append to the file
 * @filename: The file to be appended
 * @text_content: The string to append to filename
 * Return: 1 if append success or if append fails but file already exists
 * Return -1 if neither happens
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

