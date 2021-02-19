#include "holberton.h"
/**
 * _strcmp - Prototype Function
 * Description: Compare two strings
 * @s1: String one
 * @s2: String two
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int h;

/* compare two statements to move forward */
	for (h = 0; s1[h] != '\0' && s2[h] != '\0'; h++)

/* if strings are not similar */
		if (s1[h] != s2[h])
		{
			return (s1[h] - s2[h]);
		}

	return (0);
}
