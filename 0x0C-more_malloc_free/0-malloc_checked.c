#include "holberton.h"
/**
 * malloc_checked - Prototype Function
 * Description: Allocate memory using malloc
 * @b: Our unsigned int
 * Return: pointer of allocated memory, 98 if failed.
 *
 */
void *malloc_checked(unsigned int b)
{
/* Derefrence pointer */
	void *h;

/* intialize value as memory allocated for b */
	h = malloc(b);

/* if malloc fails, term with status value 98 */
	if (h == NULL)
		exit(98);

/* return a pointer to the allocated memory */
	return (h);
}
