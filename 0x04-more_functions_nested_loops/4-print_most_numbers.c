#include "holberton.h"
/**
 * print_most_numbers - Our prototype function
 * Description: print 0-9 w/o 2 & 4
 * Return: void
 */
void print_most_numbers(void)
{
	int h;

	for (h = '0'; h <= '9'; h++)
	{
		if (h != '2' && h != '4')
			_putchar(h);
	}

	_putchar('\n');

}
