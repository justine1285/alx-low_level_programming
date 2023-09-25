#include <unistd.h>

/**
 * _putchar - writes the character c to start
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is required, and errror is set appropriately.
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
