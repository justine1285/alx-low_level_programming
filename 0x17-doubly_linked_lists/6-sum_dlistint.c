#include "lists.h"
/**
 * sum_dlistint - computes the sum of data in alist
 * @head: pointer to head node of list
 * Return: sum of data in the list or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *new;
	int add = 0;

	if (!head)
		return (0);

	new = head;
	while (new)
	{
		add += new->n;
		new = new->next;
	}
	return (add);
}
