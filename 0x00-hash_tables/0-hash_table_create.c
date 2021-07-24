#include "hash_tables.h"

/**
 * Write a function to create a hash table
 * size is size of the array
 * return pointer to the new hash table
 * return NULL if there is an issue
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int h = 0;
	hash_table_t *NewTable = NULL;

	NewTable = malloc(sizeof(hash_table_t));

	if (NewTable == NULL)
		return (NULL);

	NewTable->array = malloc(sizeof(hash_node_t*) * size);

	if (NewTable->array == NULL)
		return(NULL);

	NewTable->size = size;

	for(h = 0; h < size; h++)
		NewTable->array[h] = NULL;

	return (NewTable);

}
