#include "lists.h"
/**
 * dlistint_len - computes the no of nodes in a list
 * @h: pointer to head node of the list
 * Return: no of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t tally = 0;
	const dlistint_t *new;

	if (!h)
		return (tally);

	new = h;
	while (new)
	{
		tally++;
		new = new->next;
	}
	return (tally);
}
