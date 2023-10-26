#include "main.h"
/**
 * clear_bit - set the value of a bit to 0
 * @n: pointer to the number
 * @index: position to change bit to 0
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	k = 1;
	k = k << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = k ^ *n;

	return (1);
}
