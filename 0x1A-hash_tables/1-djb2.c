#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm
 * @str: the string to hash
 * Return: the calculated hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int k;

	hash = 5381;
	while ((k = *str++))
		hash = ((hash << 5) + hash) + k;

	return (hash);
}
