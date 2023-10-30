#include "main.h"
/**
 * read_textfile - function that reads and prints a text file to
 * the POSIX standard output
 * @filename: filename
 * @letters: number of letters printed
 * Return: nymber of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int k;
	ssize_t z, y;
	char *buff;

	if (!filename)
		return (0);
	k = open(filename, O_RDONLY);

	if (k == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	z = read(k, buff, letters);
	y = write(STDOUT_FILENO, buff, z);

	close(k);
	free(buff);

	return (y);
}
