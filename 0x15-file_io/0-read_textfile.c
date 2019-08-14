#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * read_textfile - Funtion that print the content of a file
 * @filename: Is the name of the file
 * @letters: Is the mount of the chars of a file.
 * Return: the mount of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, cc, cc2;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	else
	{
		buf = malloc((sizeof(char) * letters));

		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			return (0);
		}
		cc = read(fd, buf, letters);
		if (cc == -1)
		{
			return (0);
		}
		cc2 = write(STDOUT_FILENO, buf, cc);
		if (cc2 == -1)
		{
			return (0);
		}
		close(fd);
		return (cc2);
	}
}
