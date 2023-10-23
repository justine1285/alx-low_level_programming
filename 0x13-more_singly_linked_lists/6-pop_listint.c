#include "lists.h"
/**
 * pop_listint - delete the first node of a list and return data
 * @head: the pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *k;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	k = *head;
	*head = (*head)->next;
	free(k);
	return (n);
}
