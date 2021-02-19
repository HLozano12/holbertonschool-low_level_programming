#include "holberton.h"
/**
 * reverse_array - function prototype
 * Description: Reverse content of an array of intergers
 * @a: int pointer
 * @n: Int for # of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int first;
	int last;

/* same logic from task 5 in 0x05 */
	for (first = 0, last = (n - 1); first < last; first++, last--)
	{
		int node = a[first];

		a[first] = a[last];
		a[last] = node;
	}
}
