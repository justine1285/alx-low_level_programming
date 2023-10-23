#include "lists.h"
/**
 * free_listint2 - Free a list of nodes and set the head to NULL
 * @head: pointer to the list
 */
void free_listint2(listint_t **head)
{
	listint_t *k;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		k = (*head)->next;
		free(*head);
		*head = k;
	}
	free(*head);
	*head = NULL;
}
