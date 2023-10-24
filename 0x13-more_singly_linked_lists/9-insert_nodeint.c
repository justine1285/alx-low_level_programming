#include "lists.h"
/**
 * create_new_node - creates a new node
 * @n: the data of the node
 * Return: pointer to the node
 */
listint_t *create_new_node(int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	return (node);
}

/**
 * insert_nodeint_at_index - insert a node at the index in a list
 * @head: pointer to the first element
 * @idx: index to the position
 * @n: the data of the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *z;
	listint_t *x;
	listint_t *y;

	z = *head;
	if (head == NULL)
		return (NULL);
	y = create_new_node(n);
	if (y == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = y;
		return (y);
	}

	if (idx == 0)
	{
		*head = y;
	}
	for (k = 0; k < idx - 1 && z != NULL && idx != 0; k++)
		z = z->next;
	if (z == NULL)
		return (NULL);
	if (idx == 0)
		y->next = z;
	else
	{
		x = z->next;
		z->next = y;
		y->next = x;
	}
	return (y);
}
