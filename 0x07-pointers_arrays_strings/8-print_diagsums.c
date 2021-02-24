#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Protoype Function
 * Description: Print sum of two diagonals of a square matrix of ints
 * @a: int pointer
 * @size: int given
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int h;
	int l;
	int left = 0;
	int right = 0;

	for (h = 0; h < size; h++)
	{
		for (l = 0; l < size; l++)
		{
			if (h == l)
				right += *((a + h * size) + l);
		}

		left += *((a + h * size) + ((l - 1) - h));
	}
	printf("%d, %d\n", right, left);

}
