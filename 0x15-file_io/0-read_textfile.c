#include "main.h"

/**
* read_and_print_letters - Reads a text file
* and prints a specified number of letters.
* @file_name: The name of the file to read.
* @num_letters: The number of letters to print.
*
* Return: The number of letters printed. If it fails, returns 0.
*/
ssize_t read_and_print_letters(const char *file_name, size_t num_letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (!file_name)
		return (0);
	file_descriptor = open(file_name, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * (num_letters));
	if (!buffer)
		return (0);
	bytes_read = read(file_descriptor, buffer, num_letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	close(file_descriptor);
	free(buffer);
	return (bytes_written);
}
