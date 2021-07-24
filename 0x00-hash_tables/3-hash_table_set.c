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
