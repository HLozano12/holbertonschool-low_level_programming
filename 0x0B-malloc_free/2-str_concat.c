#include "holberton.h"
/**
 * str_concat - Prototype function
 * Description: Concatenate two strings
 * @s1: string one
 * @s2: string two
 * Return: NULL on failure, s1 followed by s2 content
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int h, l;
	char *ptr;

/* if NULL is passed, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s1 = "";


/* create memory space to concat and use helper function */
	ptr = (char *)malloc(_strlen(s1) + _strlen(s2) * sizeof(char) + 1);

/* function should return NULL on failure */
	if (ptr == NULL)
		return (NULL);

/* should point to a new spacememory w/contents of s1 & s2 */
	for (h = 0; s1[h] != '\0'; h++)
	{
		ptr[a] = s1[h];
		a++;
	}

	for (l = 0; s2[l] != '\0'; l++)
	{
		ptr[a] = s2[l];
		a++;
	}

	ptr[a] = '\0';

	return (ptr);

}


/**
 * _strlen - Prototype function
 * @s: our pointer
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
