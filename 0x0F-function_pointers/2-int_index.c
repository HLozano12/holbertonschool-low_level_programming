#include "function_pointers.h"
/**
 * int_index - prototype function
 * Description: Search for an integer
 * @array: the array
 * @size: the number of elements in array
 * @cmp: pointer to the function use to compare values
 * Return: -1 if no matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int h;

/* If no element matches, return -1, If size <= 0, return -1 */
	if ((array == NULL) || (cmp == NULL) || (size <= 0))
		return (-1);

/* size is the number of elements in the array array */
	for (h = 0; h < size; h++)
	{
/* cmp is a pointer to the function to be used to compare values */
		if (cmp(array[h]) != 0)
			return (h);
	}

	return (-1);
}
