#include "holberton.h"
/**
 * _strncat - protptype function
 * Description: Link two strings
 * @dest:Our second string
 * @src: Our 1st string
 * @n: number of bytes from src
* Return: return a char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *new = dest;
	int h;

/* lays out the terms of where to end when running through strings */
	if (('\0' != dest) && ('\0' != src))
	{
		/* Prints out Hello_ until hits Nullbyte */
		while ('\0' != *dest)
			dest++;
/* prints World! until hitting nullbyte */
		while ('\0' != *src && h < n)
		{
/* what is printed in dest increments as well as src */
			*dest++ = *src++;
			h++;
		}
/* dest aka src1 will stop at  nullbyte */
		*dest = '\0';
	}
/* prints the new line for p */
	return (new);

}
