#include <stdio.h>
/**
 * main - prints its name, followed by a new line
 * @argc: number of command line argument.
 * @argv: array that contains the commadn line argument
 * Return: 0 when successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
