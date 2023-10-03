#include "main.h"

/**
* append_text_to_file - Appends text to the end of a file.
* @filename: Pointer to the file name.
* @text_content: The string to append to the file.
*
* Return: On failure or if filename is NULL - -1.
*         If the file does not exist or the user lacks write permissions - -1.
*         Otherwise - 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int open_result, write_result;
	int text_length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[text_length])
			text_length++;
	}
	open_result = open(filename, O_WRONLY | O_APPEND);
	write_result = write(open_result, text_content, text_length);
	if (open_result == -1 || write_result == -1)
		return (-1);
	close(open_result);
	return (1);
}

