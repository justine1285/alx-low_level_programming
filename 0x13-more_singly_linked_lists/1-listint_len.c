#include "lists.h"
/**
 * listint_len - count the number of element in a list
 * @h: haed pointer
 * Return: number of element in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t k;

	if (h == NULL)
		return (0);
	for (k = 0; h != NULL; k++)
	{
		h = h->next;
	}
	return (k);
}
