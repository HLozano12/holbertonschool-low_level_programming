#include "function_pointers.h"
/**
 * array_iterator - Function Prototype
 * Description: Execute a function given as a parameter each element of array
 * @array: Our array
 * @size: our size of array
 * @action: Our function pointer
 * Return: voide accoriding to prototype
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t h;

	if (action != NULL && array != NULL)
	{
		for (h = 0; h < size; h++)
			action(array[h]);
	}
}
