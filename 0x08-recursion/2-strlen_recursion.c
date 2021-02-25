#include "holberton.h"
/**
 * _strlen_recursion - Prototype Function
 * Description: return Length of a string using strlen
 * @s: Out string
 * Return: zero
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 1;

	if (*s != '\0')

		return (len + _strlen_recursion(s + 1));

	return (0);
}
