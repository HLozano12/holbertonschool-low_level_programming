#include "holberton.h"
/**
 * print_alphabet_x10 - Prototype
 * Description: Print Alphabet 10x
 * Return: Null Void
 */
void print_alphabet_x10(void)
{
	char j;
	int k;

	/* Prints 10x */
	for (k = 0; k < 10; k++)
	{
		/* prints alphabet a - z */
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
	/* Prints new line */
	_putchar('\n');
	}
}
