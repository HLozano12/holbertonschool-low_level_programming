#include "holberton.h"
/**
 * print_triangle - Prototype
 * Description: Print a triangle
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int colm;
	int row;

/* If size is 0 or less, print new line per project request */
	if (size < 1)
		_putchar('\n');

/* create the column using size as size of triangle */
	for  (colm = 1; colm <= size; colm++)
	{
		for (row = 1; row <= size - colm; row++)
			_putchar(' ');

/* Create the row with also using size as triangle size */
		for (; row <= size; row++)
       			_putchar(35);

		_putchar('\n');
	}
}
