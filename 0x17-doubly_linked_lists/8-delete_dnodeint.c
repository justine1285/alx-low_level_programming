#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at specific position
 * @head: double pointer to head node
 * @index: position of node to be deleted
 * Return: 1 if successful, otherwise fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1;
	dlistint_t *head2;
	unsigned int z;

	head1 = *head;

	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;

	z = 0;

	while (head1 != NULL)
	{
		if (z == index)
		{
			if (z == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;

				if (head1->next != NULL)
					head1->next->prev = head2;
			}

			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
		z++;
	}

	return (-1);
}

