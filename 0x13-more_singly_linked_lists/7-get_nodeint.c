#include "lists.h"
/**
 * get_nodeint_at_index - retrieve a node at an index
 * @head: pointer
 * @index: node position to retrieve
 * Return: pointer to the retrieved node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z;

	for (z = 0; z < index; z++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
