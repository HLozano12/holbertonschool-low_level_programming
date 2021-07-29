#include "hash_tables.h"
/**
 * hash_table_set - prototype
 * @ht: represent the HashTable we want to add/update the key
 * @key: represents key, Key can not be an empty string
 * @value: represents value assoc with key
 * Return: 1 if sucess and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *old;
	hash_node_t *tmp = NULL;
	unsigned long int index;

	if (key == NULL || value == NULL)
		return (0);
	if (strlen(key) < 1)
		return (0);
	if (ht == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		old = ht->array[index];
		for (tmp = old; tmp != NULL; tmp = tmp->next)
		{
			if (strcmp(key, tmp->key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				free(node->value);
				free(node);
				return (1);
			}
		}
		node->next = old;
		ht->array[index] = node;
	}
	return (1);
}
