#include "holberton.h"
/**
 * _strncpy - function prototype
 * Description: Copy a string
 * @dest: first string
 * @src: second string
 * @n: our int
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int h;

	for (h = 0; h < n && src[h] != '\0'; h++)
		dest[h] = src[h];
	for (; h < n; h++)
		dest[h] = '\0';

	return (dest);

}
