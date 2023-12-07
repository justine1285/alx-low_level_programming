#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *previous, *recent;

	previous = head;
	recent = head;

	while (recent)
	{
		recent = recent->next;
		free(previous);
		previous = recent;
	}
}
