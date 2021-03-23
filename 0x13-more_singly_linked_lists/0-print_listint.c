#include "lists.h"
/**
 * print_listint - prototype function
 * Description: print all elements of a listin_t
 * @h: our pointer
 * Return: # of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t Ncount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->data;
		Ncount++;
	}

	return (Ncount);

}
