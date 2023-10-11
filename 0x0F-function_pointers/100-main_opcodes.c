#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - print the cpcodes of the program
 * @a: address of the main function
 * @n: number of bytes to priint
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - print the cpcodes of its own main function
 * @argc: atgument count
 * @argv: argument vctor
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
