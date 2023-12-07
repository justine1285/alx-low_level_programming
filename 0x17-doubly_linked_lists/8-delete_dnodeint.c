#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at specific position
 * @head: double pointer to head node
 * @index: position of node to be deleted
 * Return: 1 if successful, otherwise fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new;
	unsigned int tally = 0;

	if (!*head)
		return (-1);

	new = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	while (tally < index)
	{
		tally++;
		new = new->next;

		if (!new)
			return (-1);
	}
	new->prev->next = new->next;
	new->next->prev = new->prev;
	free(new);
	return (1);
}
