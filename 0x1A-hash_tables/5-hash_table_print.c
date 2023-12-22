#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: a pointer to the hash to print
 * Description: key/value pairs are printed in the order they
 * appear in the array
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int k;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			if (flag == 1)
				printf(", ");
			node = ht->array[k];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
