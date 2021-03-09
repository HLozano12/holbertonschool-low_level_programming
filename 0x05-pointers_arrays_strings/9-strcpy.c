#include "holberton.h"
/**
  * _strcpy - Prototype function
  * Description: Copy a string from src to dest
  * @dest: String to copy to
  * @src: source of the string
  * Return: value of dest
  */
char *_strcpy(char *dest, char *src)
{
	int h;

/* Run through the src string */
	for (h = 0; src[h] != '\0'; h++)
	{
		dest[h] = src[h];
	}

	dest[h] = '\0';

/* return the dest pointer value */
	return (dest);
}
