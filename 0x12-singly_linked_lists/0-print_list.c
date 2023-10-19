#include "lists.h"
/**
 * print_list - print all elements in a singly linked list
 * @h: head of the list
 * Return: total number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int k;

	if (h == NULL)
		return (0);
	for (k = 1; h->next != NULL; k++)
	{
		if (h->str == NULL)
			printf("[%lu] %s\n", h->len, "(nil)");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%lu] %s\n", h->len, h->str);
	return (k);
}
