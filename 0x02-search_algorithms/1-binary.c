#include "search_algos.h"

/**
 * binary_search - Search for val in a sorted array of ints using binary search
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: value to search for
 * 
 * Return: index where value is, or -1
 */
 

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	if (size >= 1)
	{
		int x = 1 + (size -1) / 2;
	if (array[x] == value)
		return (x);
	if (array[x] > value)
		return (binary_search(array, x - 1, value, size));
	return (binary_search(array, x + 1, value, size));
	}
	return (-1);
}
