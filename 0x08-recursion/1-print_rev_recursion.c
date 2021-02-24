#include "holberton.h"
/**
 * _print_rev_recursion - Prototype Function
 * Description: Print String in Reverse
 * @s: String to reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
/* if string is not equal to nullbyte/end of string */
	if (*s != '\0')
	{
/* print string but starting at next array*/
		_print_rev_recursion(s + 1);
/* Print new string and run again */
	_putchar(*s);
	}
}
