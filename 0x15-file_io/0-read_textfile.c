#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - function to read a text file and prints it to posix standard output
 * @filename: the file name or path of the file
 * @letters: number of letter the programe will read
 * Retrun: 0 if the file can not be opened or read | 0 if the fileanme = null | 0 if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, y;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd < 0 | filename == NULL)
		return (0);
	else
	{
		buf = malloc(sizeof(char) * letters);
		if (!buf)
			return (0);
		i = read(fd, buf, letters);
		if (i < 0)
			return (0);
		buf[i] = '\0';
		close(fd);
		y = write(STDOUT_FILENO, buf, i);
		if (y < 0)
		{
			free (buf);
			return (0);
		}
		free (buf)
		return (y);
	}
}
