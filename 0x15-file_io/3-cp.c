#include "main.h"

/**
 * check_files - Checks if files can be opened.
 * @src_fd: File descriptor for the source file.
 * @dest_fd: File descriptor for the destination file.
 * @args: Arguments vector.
 * This function checks if the source and destination files can be opened,
 * and if not, it prints an error message
 * and exits with the appropriate error code.
 */
void check_files(int src_fd, int dest_fd, char *args[])
{
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
		exit(98);
	}
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
		exit(99);
	}
}

/**
 * main - Entry point for the program.
 * @argc: Number of command-line arguments.
 * @argv: Command-line argument strings.
 * This function copies the content of one
 * file to another file and handles various error cases.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd, close_status;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src_fd = open(argv[1], O_RDONLY);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_files(src_fd, dest_fd, argv);
	bytes_read = 1024;
	while (bytes_read == 1024)
	{
		bytes_read = read(src_fd, buffer, 1024);
		if (bytes_read == -1)
			check_files(-1, 0, argv);
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
			check_files(0, -1, argv);
	}
	close_status = close(src_fd);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	close_status = close(dest_fd);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
	return (0);
}
