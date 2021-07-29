#include "hash_tables.h"
/**
 * hash_table_print - Prototype to print a hash table
 * @ht: the hash table
 * Return: Print key/value in order that appear in array of ht
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int h;
	unsigned int a = 0;
	hash_node_t *hnode = NULL;

	/* if hash is empty */
	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (h = 0; h < ht->size; h++)
	{
		hnode = ht->array[h];
		while (hnode != NULL)
		{
			if (a)
				printf(", ");
			printf("'%s': '%s'", hnode->key, hnode->value);
			hnode = hnode->next;
			a = 1;
		}
	}
	printf("}\n");
}
