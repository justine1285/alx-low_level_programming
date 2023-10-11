#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: target array holding int
 * @size: array size
 * @cmp: function pointer to compare search int
 * Return: int element match, -1 if size <=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
