#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 *
 * @size: an input for the size of the array in int
 * @c: to store the strings of characters
 *
 * Return: a pointer to the base character c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		ptr[x] = c;
	}
	return (ptr);
}
