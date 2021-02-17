#include "holberton.h"
/**
 * _strlen - Prototype function
 * @*s: our pointer
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
