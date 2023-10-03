#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to the newly allocated
 * space in memory also duplicate the string it holds
 * to the new space
 *
 * @str: initial input string
 *
 * Return: pointer to the memory allocated.
 */
char *_strdup(char *str)
{
	unsigned int x, y;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	strdout = (char *)malloc(sizeof(char) * (x + 1));
	if (strdout == NULL)
	{
		return (NULL);
	}
	for (y = 0; y <= x; y++)
	{
		strdout[y] = str[y];
	}
	return (strdout);
}
