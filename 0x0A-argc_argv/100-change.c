#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the minimum number of coin
 * to make a change for an amount
 * @argc: number of command line argument
 * @argv: array thsr holds the command line argument.
 * Return: 0 when successful.
 */
int main(int argc, char *argv[])
{
	int i, j = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	while (i > 0)
	{
		if (i >= 25)
			i -= 25;
		if (i >= 10)
			i -= 10;
		if (i >= 5)
			i -= 5;
		if (i >= 2)
			i -= 2;
		if (i >= 1)
			i -= 1;
		j += 1;
	}
	printf("%d\n", j);
	return (0);
}
