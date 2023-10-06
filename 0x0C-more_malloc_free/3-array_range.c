#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integer
 * @min: minimum value
 * @max: maximum value
 * Return: int pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int i, j;
	int *a;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	a = malloc(sizeof(int) * j);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
