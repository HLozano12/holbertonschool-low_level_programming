#include "holberton.h"
/**
 * print_line - our prototype
 * @n: the # of times the underscore is printed
 * Description: draw a straight line(several underscores)
 * Return: new line if n is zero or less
 */
void print_line(int n)
{
	int y;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
			_putchar('_');
	}
	_putchar('\n');
}
