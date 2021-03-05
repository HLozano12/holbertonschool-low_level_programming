#include "holberton.h"
/**
 * _calloc - Prototype Function
 * Description: allocate memory for an array
 * @nmemb: our array
 * @size: element of
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t h;

/* If nmemb or size is 0, then _calloc returns NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

/* If malloc fails, then _calloc returns NULL */

	if (ptr == NULL)
		return (NULL);

	for (h = 0; h < nmemb * size; h++)
		ptr[h] = '\0';

	return (ptr);

}
