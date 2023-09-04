#include "main.h"

/**
 * read_textfile - Reads and prints the contents
 * of a file to the standard output.
 *
 * @filename: The name of the file to be read.
 * @letters: The number of characters to read and print from the file.
 *
 * Return: The number of characters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t written;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	written = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (written);
}

