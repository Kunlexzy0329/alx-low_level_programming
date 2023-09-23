#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename:pointer the filename.
 * @text_content: added content to the existed content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desciptor;
	int new_letters;
	int read_write;

	if (!filename)
		return (-1);

	file_desciptor = open(filename, O_WRONLY | O_APPEND);

	if (file_desciptor == -1)
		return (-1);

	if (text_content)
	{
		for (new_letters = 0; text_content[new_letters]; new_letters++)
			;

		read_write = write(file_desciptor, text_content, new_letters);

		if (read_write == -1)
			return (-1);
	}

	close(file_desciptor);

	return (1);
}
