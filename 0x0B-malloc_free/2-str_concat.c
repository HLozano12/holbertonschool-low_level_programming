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
	unsigned int len1 = 0, len2 = 0;
	unsigned int h, l;
	char *ptr;

/* if NULL is passed, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s1 = "";


/* while the array is not set to NullByte, move through */
	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

/* create memory space to concat and take consideration of the nullbyte */
	ptr = (char *)malloc((len1 + len2) * sizeof(char) + 2);

/* function should return NULL on failure */
	if (ptr == 0)
	{
		free(ptr);
		return (NULL);
	}

/* should point to a new spacememory w/contents of s1 & s2 */
	for (h = 0; s1[h] != '\0'; h++)
		ptr[h] = s1[h];

	for (l = 0; s2[l] != '\0'; l++)
		ptr[l + len1] = s2[l];

	return (ptr);

}
