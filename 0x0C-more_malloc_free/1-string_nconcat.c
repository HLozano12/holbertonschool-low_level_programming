#include "holberton.h"
/**
 * string_nconcat- prototype function
 * Description: concatenates two strings
 * @s1: String one
 * @s2: String to be concatenated with
 * @n: value for bytes to add s2
 * Return: NULL on fail, Pointer to new space in memory
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int h, l;

/* if NULL is passed, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	for (h = 0; s1[h]; h++)
		;

/* greater or equal to the length of s2 then use the entire string s2 */
	for (l = 0; s2[l]; l++)
	{
		if (n >= l)
			n = l;
	}

	a = malloc(sizeof(char) * h + n + 1);

/* If the function fails, it should return NULL */
	if (a == NULL)
		return (NULL);

/* point to new space in memory and null terminated */
	a[l] = s2[l];

	a[l] = '\0';
	return (a);

}
