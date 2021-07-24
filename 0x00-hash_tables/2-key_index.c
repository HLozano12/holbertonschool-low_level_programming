#include "hash_tables.h"
/**
 * write function that gives you the index of a key
 * key is key
 * size is the size of the array of the hash table
 * Use the hash_djb2 func
 * retrn indx which the key/value should be stored in array
 * have to use hash func of all the next tables
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
