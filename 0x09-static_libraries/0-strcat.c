#include "holberton.h"
/**
 * _strcat - protptype function
 * Description: Link two strings
 * @dest:Our second string
 * @src: Our 1st string
 * Return: return a char
 */
char *_strcat(char *dest, char *src)
{
	char *new = dest;

/* lays out the terms of where to end when running through strings */
	if (('\0' != dest) && ('\0' != src))
	{
		/* Prints out Hello_ until hits Nullbyte */
		while ('\0' != *dest)
			dest++;
/* prints World! until hitting nullbyte */
		while ('\0' != *src)
/* what is printed in dest increments as well as src */
			*dest++ = *src++;
/* dest aka src1 will stop at  nullbyte */
		*dest = '\0';
	}
/* prints the new line for p */
	return (new);

}
