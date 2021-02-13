#include "holberton.h"
/**
 * print_square - Our prototype
 * Description: Print a square made up of pound signs
 * @size: The size of our square
 * Return: void
 */
void print_square(int size)
{
	int column;
	int row;

/* if size is zero or less print a new line */
	if (size < 1)
		_putchar('\n');

/* if size is greater or equal to 1, increment */
	for (row = 1; row <= size; row++)
	{
/* if size is greater or less than column, increment */
		for (column = 1; column <= size; column++)
		{
/* print # for evertime row or column are less or equal to size */
			_putchar('#');

/* If column and size are equal to each other, print new line */
			if (column == size)
				_putchar('\n');
		}

	}

}
