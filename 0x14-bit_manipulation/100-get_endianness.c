#include "main.h"
/**
 * get_endianness - check the system Byte order
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	int k = 1;
	int z;

	z = (int) (((char *)&k)[0]);
	return (z);
}
