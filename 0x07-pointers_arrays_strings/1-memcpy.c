#include "holberton.h"
/**
 * _memcpy - Prototype function
 * Description: copy memory area
 * @dest: Memory area
 * @src: Memory area
 * @n: bytes copied
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int h = 0;

/* move through the string */
	for (; h < n; h++)
	{
/* array in dest will be same to what is in src */
		dest[h] = src[h];
	}

	return (dest);
}
