#include "holberton.h"
/**
 * print_alphabet - The prototype
 * Description: print lowercase alpha with prototype
 * Return: Null Void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
