#include "holberton.h"
/**
 * create_array - Prototype function
 * Description: Create an array of chars and intialize wit spfc char
 * @size: the size of the array
 * @c: Char to point at
 * Return: Null if size is zero or fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int h;
	char *l;

/* Return NULL if size = o */
	if (size == 0)
		return (NULL);

	l = malloc(sizeof(c) * size);

/* Return NULL if fails */
	if (l == 0)
		return (NULL);


	for (h = 0; h <= size; h++)
	{
		l[h] = c;
	}
/* Return pointer to the array */
	return (l);
}
