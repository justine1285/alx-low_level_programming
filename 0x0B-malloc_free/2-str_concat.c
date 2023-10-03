#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concertenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concertenated string
 * whixh memory was allocated for
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, k, limit;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0; k < len1; k++)
	{
		ptr[k] = s1[k];
	}
	for (limit = 0; limit <= len2; limit++)
	{
		ptr[k] = s2[limit];
		k++;
	}
	return (ptr);
}
