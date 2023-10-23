#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: the pointer to the pointer head
 * @n: data to be added to the new list
 * Return: address of the element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *k;
	listint_t *y;

	(void)y;

	k = malloc(sizeof(listint_t));
	if (k == NULL)
		return (NULL);

	k->n = n;
	k->next = NULL;
	y = *head;
	if (*head == NULL)
	{
		*head = k;
	}
	else
	{
		while (y->next != NULL)
		{
			y = y->next;
		}
		y->next = k;
	}

	return (*head);
}
