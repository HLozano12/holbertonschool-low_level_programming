#include "holberton.h"
/**
 * print_numbers - Function given
 * Description: Printing 0-9 with new line
 * Return: zero
 */
void print_numbers(void)
{
	int j;

	/* Begin at zero and increase until 9 */
	for (j = '0'; j <= '9'; j++)
	{
		/* print every numb until 9 */
		_putchar(j);
	}

	/* Print new line */
	_putchar('\n');
}
