#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node of a list
 * @head: pointer to the beginning of the list
 * @index: index of the node
 * Return: 1 if successful and -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *z;
	listint_t *y;

	z = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (k = 0; k < index - 1 && z != NULL && index != 0; k++)
		z = z->next;
	if (z == NULL)
		return (-1);
	if (index == 0)
	{
		y = z->next;
		free(z);
		*head = y;
	}
	else
	{
		if (z->next == NULL)
			y = z->next;
		else
			y = z->next->next;
		free(z->next);
		z->next = y;
	}
	return (1);
}
