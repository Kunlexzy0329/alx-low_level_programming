#include "main.h"

/**
 * read_textfile - functions to reads a text file and
 * prints the specified number of letters
 * @filename: The name of the file to read.
 * @letters:number of letters to read and print.
 * Return: The actual number of letters printed. Returns 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	close(fd);
	free(buf);
	if (rd != wr)
		return (0);
	return (wr);
}
