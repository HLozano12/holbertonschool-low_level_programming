#include "holberton.h"
/**
 * _puts_recursion - prototype function
 * Description: print a string followed by new line
 * @s: pointer
 * Return: void
 */
void _puts_recursion(char *s)
{
/* if element is not equal to nullbyte */
	if (*s != '\0')
	{
		/* print string */
		_putchar(*s);
/* using recursion to call function and add 1 to the value */
		_puts_recursion(s + 1);
	}

	else if (*s == '\0')
		_putchar('\n');
}
