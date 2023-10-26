#include "main.h"
/**
 * get_bit - get the value of a bit
 * @index: the index of the bit
 * @n: the number to chck the value
 * Return: integer 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (k = 0; k < index; k++)
		n = n >> 1;
	return ((n & 1));
}
