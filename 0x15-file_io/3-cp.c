#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * copy_file - copy content to another file
 * @fd_from: file descriptor of file from
 * @fd_to: file descriptor of file to
 * Return: 0 or NULL
 */
char *copy_file(int fd_from, int fd_to)
{
	int read_from = 0, wrt_to = 0;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (NULL);
	while ((read_from = read(fd_from, buffer, 1024)) > 0)
	{
		if (read_from > 0)
			wrt_to = write(fd_to, buffer, read_from);
	}
	if (read_from == -1)
		return (0);
	if (wrt_to == -1)
		return (0);
	free(buffer);
	return (buffer);
}
/**
 * main - entry, copy content file to another
 * @ac: number of arguments
 * @av: argument
 * Return: exit or 0
 */
int main(int ac, char *av[])
{
	int fd_file_from = 0, fd_file_to = 0;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_file_from = open(av[1], O_RDONLY);
	fd_file_to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_file_from == -1)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	if (fd_file_to == -1)
	{
		dprintf(2, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	copy_file(fd_file_from, fd_file_to);
	if (close(fd_file_from) == -1 || close(fd_file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE");
		exit(100);
	}
	return (0);
}
