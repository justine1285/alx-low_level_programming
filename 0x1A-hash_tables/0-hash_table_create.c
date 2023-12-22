#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: the size of the array
 * Return: if an error occurs - NULL
 * otherwise - a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int k;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		ht->array[k] = NULL;

	return (ht);
}
