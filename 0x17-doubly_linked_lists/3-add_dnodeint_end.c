#include "lists.h"
/**
 * add_dnodeint_end - adds new node at the end of a list
 * @head: pointer to pointer tp head node
 * @n: value of the new node
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *new;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		new = *head;
		while (new->next)
			new = new->next;

		new->next = new_node;
		new_node->prev = new;
	}

	return (new_node);
}
