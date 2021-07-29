#include "hash_tables.h"
/**
 * hash_table_delete - Prototype that deletes hashtable
 * @ht: the Hash Table
 * Return: EXIT_Success
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *a = NULL;
	hash_node_t *b = NULL;
	unsigned long int c = 0;

	if (ht == NULL)
		;
	else
	{
		while (c < ht->size)
		{
			b = ht->array[c];
			while (b != NULL)
			{
				a = b;
				b = b->next;
				free(a->key);
				free(a->value);
				free(a);
			}
			c++;
		}
		free(ht->array);
		free(ht);
	}
}
