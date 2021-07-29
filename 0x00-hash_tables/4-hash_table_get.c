#include "hash_tables.h"
/**
 * hash_table_get - Prototype given to retrieve value assoc with key
 * @ht: the hash table we want to look into
 * @key: the key we are looking for
 * Return: The value assoc with element or NULL if Key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	/* Return NULL if key or value not found */
	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];

	if (temp == NULL)
	{
		return (NULL);
	}

	while (strcmp(key, temp->key) != 0)
	{
		temp = temp->next;
	}

	/* if value return */
	return (temp->value);
}
