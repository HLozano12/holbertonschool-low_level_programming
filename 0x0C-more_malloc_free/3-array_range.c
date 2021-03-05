#include "holberton.h"
/**
 * array_range - Prototype Function
 * Description: function that creates an array of integers
 * @min: Start
 * @max: End
 * Return: if min > max rtrn NULL, NULL if Fail
 */
int *array_range(int min, int max)
{
	int *a;
	int h, l;

/* If min > max, return NULL */
	if (min > max)
		return (NULL);

	h = max - min;

	a = malloc(sizeof(int) * (h + 1));

/* If malloc fails, return NULL */
	if (a == NULL)
		return (NULL);

		l = 0;

	while (min <= max)
	{

		a[l] = min;
		l++;
		min++;
	}
/* Return: the pointer to the newly created array */
	return (a);
}
