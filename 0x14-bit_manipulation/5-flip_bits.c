#include "main.h"
/**
 * flip_bits - function that returns the umber of bits you flip
 * @n: first number to compare
 * @m: second number to compare
 * Return: number of bit you flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k;
	unsigned long int z;
       
	k = n ^ m;
	for (z = 0; k > 0;)
	{
		if ((k & 1) == 1)
			z++;
		k = k >> 1;
	}
	return (z);
}
