#include "lists.h"
/**
 * add_node - add a node to the list
 * @head: pointer gto the head of the list
 * @str: string to be put to the first position
 * Return: pointer to the newly assigned code
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)

		new_node->next = NULL;
	else
			new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
		return (*head);
}

/**
 * len - get the length of string
 * @str: the string
 * Return: length of the string
 */
int len(const char *str)
{
	int k;

	if (str == NULL)
		return (0);

	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	return (k);
}
