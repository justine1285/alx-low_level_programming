#include "lists.h"
/**
 * print_dlistint - prints all element of a dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t tally = 0;
	const dlistint_t *new;

	if (!h)
		return (tally);

	new = h;
	while (new)
	{
		printf("%d\n", new->n);
		tally++;
		new = new->next;
	}
	return (tally);
}
