#include "holberton.h"
/**
 * _memset - Prototype function
 * Description: Fill Memory with constant byte
 * @s: Our pointer
 * @b: The constant byte
 * @n: Byte of memory
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

/* moves through the string */
	for (h = 0; h < n; h++)
		s[h] = b;

	return (s);
}
