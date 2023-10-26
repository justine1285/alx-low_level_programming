#include "main.h"
/**
 * set_bit - set the bit of a number to 1
 * @n: pointer to the bit to be used
 * @index: position of the bit to be used
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	k = 1;
	k = k << index;
	*n = ((*n) | k);
	return (1);
}
