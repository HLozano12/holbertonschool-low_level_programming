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
	int low = 0;
	int	high = size - 1;
	int mid = (high + low) / 2;
	int a = 0;
	
	/* if array is NULL return -1 */
	if (array == NULL)
		return (-1);

	if (value == array[mid])
		return (mid);

	while (low <= high)
	{
		/* Print like example */
		printf("Searching in array: ");
		for (a = low; a <= high; a++)
		{
			if (a == high)
				printf("%d\n", array[a]);
			else
				printf("%d, ", array[a]);
		}
		mid = (high + low) / 2;
		if (value > array[mid])
			low = mid + 1;
		else if (value < array[mid])
			high = mid -1;
		else
			return (mid);
	}
	return (-1);
}
