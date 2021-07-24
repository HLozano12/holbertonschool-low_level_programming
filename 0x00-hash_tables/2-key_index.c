#include "hash_tables.h"
/**
 * key_index - The function
 * @key: Key is key
 * @size: size of the array of the hashtable
 * Return: return inx of key/value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
