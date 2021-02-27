#include "holberton.h"
/**
 * _puts - prototype function
 * Description: Print String followed with new line to stdout
 * @str: our pointer
 * Return: void
 */
void _puts(char *str)
{
	int h;

/* if value h is not nullbyte increment */
	for (h = 0; str[h] != '\0'; h++)
	{
/* print the value in the array */
		_putchar(str[h]);
	}

	_putchar('\n');

}
