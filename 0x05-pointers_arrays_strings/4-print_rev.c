#include "holberton.h"
/**
 * print_rev - prototype function
 * Description: print string from task 3, in reverse
 * @s: our pointer
 * Return: void
 */
void print_rev(char *s)
{
	int h;
	int len = _strlen(s);

/* len - 1 removes NullByte, and where len is >= zero we decrement */
	for (h = len - 1; h >= 0; h--)
	{
		/* print element in array */
		_putchar(s[h]);
	}

	_putchar('\n');
}

/* Using function from task 2 to figre out length */
/**
 * _strlen - Prototype function task 2
 * @s: our pointer
 * Description: Return length of string
 * Return: an int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
