#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a list
 * @head: pointer to head node of list
 * @index: position of node in the list
 * Return: address of nth nth or NULL if it is not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new;
	unsigned int tally = 0;

	if (!head)
		return (NULL);

	new = head;
	while (new)
	{
		if (tally == index)
			return (new);
		tally++;
		new = new->next;
	}
	return (NULL);
}
