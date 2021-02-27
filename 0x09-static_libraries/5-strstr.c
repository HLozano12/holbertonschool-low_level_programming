#include "holberton.h"
/**
 * _strstr - prototype function
 * Description: locate substring
 * @haystack: substring to be run trough
 * @needle: comparing string
 * Return: pointer to the beginning located sub or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int h;

	for (h = 0; *haystack != '\0'; haystack++)
	{
		for (h = 0; needle[h] == haystack[h]; h++)
			if (haystack[h] != needle[h])
				continue;

		if (needle[h] == '\0')
			return (haystack);
	}

	return (0);
}
