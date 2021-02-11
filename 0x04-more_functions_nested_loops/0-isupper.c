#include "holberton.h"
/**
 * _isupper - function checks if varible value falls into a certain char class
 * @c: our varible to check
 * Description: check for uppercase characters
 * Return: 1 if varible is upper case, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);
}
