#include "holberton.h"
/**
 * print_diagonal - prototype
 * @n: nuber of times the char "\" shows
 * Description: print a diagonal line
 * Return: void
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		/* */
		for (a = 1; a <= n; a++)
		{
			/* Prints the first two lines */
			for (b = 0; b < a - 1; b++)
				/* prints space out per line */
				_putchar(' ');
			/* print backslashes */
			_putchar('\\');
			/* prints backslashes into new lines to create diag */
			_putchar('\n');

		}
	}
/* gives new line when n is zero */
	else
		_putchar('\n');

}
