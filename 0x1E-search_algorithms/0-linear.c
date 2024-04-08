#include "search_algos.h"

/**
 * linear_search - searches for a value i an array of integers
 * @array: pointer to the first element
 * @size: is the number of elements in array
 * @value: value to search for
 *
 * Return: value is not present in array or if array is NULL -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
