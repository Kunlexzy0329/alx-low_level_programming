#include "main.h"
#define BUFFER_SIZE 1024

/**
* copyFile - Copies the contents of one file to another.
* @src: The name of the source file.
* @dst: The name of the destination file.
*
* Return: 0 on success, non-zero on failure.
*/
int copyFile(const char *src, const char *dst)
{
	int src_fd, dst_fd, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (src == NULL || dst == NULL)
	{
		fprintf(stderr, "Usage: copyFile source_file destination_file\n");

		return (1);
	}
	src_fd = open(src, O_RDONLY);
	if (src_fd == -1)
	{
		perror("Error: Can't open source file");
		return (1);
	}
	dst_fd = open(dst, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dst_fd == -1)
	{
		perror("Error: Can't open destination file");
		close(src_fd);
		return (1);
	}
	while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dst_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			perror("Error: Write to destination file failed");
			close(src_fd);
			close(dst_fd);
			return (1);
		}
	}

/**Close files*/
	close(src_fd);
	close(dst_fd);
	return (0);
}

/**
 *main- command line arguments
 *@argc: argument count
 *@argv: pointer to the argument vector
 *Return: values to the consol
 */

int main(int argc, char *argv[])
{
	const char *src, *dst;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: copyFile source_file destination_file\n");
		return (1);
	}
	src = argv[1];
	dst = argv[2];
	if (copyFile(src, dst) == 0)
	{
		printf("File copied successfully.\n");
		return (0);
	}
	else
	{
		fprintf(stderr, "File copy failed.\n");
		return (1);
	}
}
