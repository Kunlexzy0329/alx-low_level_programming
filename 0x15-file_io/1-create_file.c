#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the filename.
 * @text_content: content writed in the file pointed to.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int new_letters;
	int read_write;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (new_letters = 0; text_content[new_letters]; new_letters++)
		;

	read_write = write(file_descriptor, text_content, new_letters);

	if (read_write == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
