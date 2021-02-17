#include "holberton.h"
/**
 * swap_int - our prototype
 * Description: Swap the values of two ints
 * @a: variable of one
 * @b: variable of the other
 * Return: void per prototype
 */
void swap_int(int *a, int *b)
{
/* setting an int to value in pointer a */
	int swap = *a;
/* Setting a value to be what is b value */
	*a = *b;
/* Setting b value to now be what what a will be */
	*b = swap;
}
