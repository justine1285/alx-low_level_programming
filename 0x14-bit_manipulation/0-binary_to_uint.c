#include "main.h"
/**
 * binary_to_uint - converts binsry numbers to integers/decimal numbers
 * @b: a pointer to a string containing the binary number
 * Return: the converted decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k, i, j, x, y;
	int g;

	g = 2;
	x = 0;
	y = 1;

	if (b == NULL)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
		;
	if (k == 1 && (b[0] == '0' || b[0] == '1'))
			return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		for (j = k - 1; j > 0; j--)
		y = y * g;
		x = x + (y * (b[i] - 48));
		k--;
		y = 1;
	}
	return (x);
}
