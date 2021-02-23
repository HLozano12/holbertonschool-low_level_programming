#include "holberton.h"
/**
 * _strpbrk - prototype function
 * Describe: search for any of a set of bytes
 * @s: first string
 * @accept: second string
 * Return: pointer bytes in s, null if none
 */
char *_strpbrk(char *s, char *accept)
{
	int h = 0;
	int l;

	while (s[h])
	{
		l = 0;

		while (accept[l])
		{
			if (accept[l] == s[h])
				return (s + h);

			l++;
		}

		h++;
	}

	return (0);
}
