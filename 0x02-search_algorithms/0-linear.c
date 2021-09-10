#include "search_algos.h"

/**
 * linear_search - Sequentially checks each element of a list until match found
 * @array: The array we are searching in
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: The index of value in the array or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t shirt;

	for (shirt = 0; shirt < size && array != NULL; shirt++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)shirt, array[shirt]);
		if (array[shirt] == value)
			return ((int)shirt);
	}
	return (-1);
}
