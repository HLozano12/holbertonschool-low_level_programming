#include "holberton.h"
/**
 * _islower - prototype
 * Decription: check for lowercase characters
 * @c: our int
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
	/* check for lower case */
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	/* If not lower case */
	else
		return (0);
}
