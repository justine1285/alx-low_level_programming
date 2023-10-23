#include "lists.h"
/**
 * print_listint - prints the int in a singly linked list
 * @h: the head pointer to the list
 * Return: The number of node in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t k;

	if (h == NULL)
		return (0);
	for (k = 0; h != NULL; k++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (k);
}
