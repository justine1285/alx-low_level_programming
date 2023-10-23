#include "lists.h"
/**
 * add_nodeint - add node to the list
 * @head: pointer to the head pointer
 * @n: new integer to be created
 * Return: the head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (0);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	if (*head == NULL)
		node->next = NULL;
	else
		node->next = *head;
	node->n = n;
	*head = node;

	return (0);
}
