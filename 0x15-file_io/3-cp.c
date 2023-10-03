#include "main.h"

/**
* createBuf - Allocates a buffer of 1024 bytes.
* @file: The name of the file buffer is being allocated for.
*
* Return: A pointer to the newly-allocated buffer.
*/
char *createBuf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
* closeFd - Closes a file descriptor.
* @fd: The file descriptor to be closed.
*/
void closeFd(int fd)
{
	int result;

	result = close(fd);
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
* main - Copies the contents of a source file to a destination file.
* @argc: argument counter
* @argv:  pointers to the arguments vector.
*
* Return: 0 on success.
*
* Description: If the argument count is incorrect - exit code 97.
*If the source file does not exist or cannot be read - exit code 98.
*If the destination file cannot be created or written to - exit code 99.
*If the source or destination file cannot be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
	int srcFd, dstFd, bytesRd, bytesWr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp source_file destination_file\n");
		exit(97);
	}
	buf = createBuf(argv[2]);
	srcFd = open(argv[1], O_RDONLY);
	bytesRd = read(srcFd, buf, 1024);
	dstFd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (srcFd == -1 || bytesRd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		bytesWr = write(dstFd, buf, bytesRd);
		if (dstFd == -1 || bytesWr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		bytesRd = read(srcFd, buf, 1024);
		dstFd = open(argv[2], O_WRONLY | O_APPEND);
	} while (bytesRd > 0);
	free(buf);
	closeFd(srcFd);
	closeFd(dstFd);
	return (0);
}
