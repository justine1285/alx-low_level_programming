#include "main.h"
#include <stdio.h>
/**
 * error_file - checks an opened file and handles errors
 * @file_from: initial file to check and copy from
 * @file_to: destination to copy file to
 * @argv: argument vector
 * Return: no return
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copy file content from one to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, z;
	ssize_t k, y;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0644);
	error_file(file_from, file_to, argv);

	k = 1024;
	while (k == 1024)
	{
		k = read(file_from, buff, 1024);
		if (k == -1)
			error_file(-1, 0, argv);
		y = write(file_to, buff, k);
		if (y == -1)
		error_file(0, -1, argv);
	}

	z = close(file_from);
	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	z = close(file_to);
	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
