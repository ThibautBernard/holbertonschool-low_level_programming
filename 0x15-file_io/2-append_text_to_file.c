#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file - append a file
 * @filename: name of the file
 * @text_content: content to add in the file
 * Return: 1 if success, -1 error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int r_write = 0, fdt = 0;

	if (filename == NULL || text_content == NULL)
		return (-1);
	fdt = open(filename, O_WRONLY | O_APPEND);
	if (fdt == -1)
		return (-1);
	r_write = write(fdt, text_content, strlen(text_content));
	if (r_write == -1)
		return (-1);
	return (1);
}
