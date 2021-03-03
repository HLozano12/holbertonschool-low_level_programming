#include "holberton.h"
/**
 * _strdup - function prototype
 * Description: Return pointer to newly allocated space in memory
 * @str: char pointer
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int h;
	unsigned int l;

/* Return NULL if str equals NULL */
	if (str == NULL)
		return (NULL);

/* Move through the string */
	for (l = 0; str[l] != '\0'; l++)
		continue;
/* allocate space moving up one */
	a = malloc((l + 1) * sizeof(char));

/* Return NULL if insufficient memory available */
	if (a == NULL)
		return (NULL);

	for (h = 0; h <= l; h++)
	{
		a[h] = str[h];
	}
/* success of function returning a pointer t duplicated string */
	return (a);
}
