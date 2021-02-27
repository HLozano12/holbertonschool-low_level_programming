#include "holberton.h"
/**
 * _strspn - The prototype function
 * Description: Get the length of a prefix substring
 * @s: Char pointer
 * @accept: Char pointer
 * Return: number of bytes in initial seg of s consist of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int h, l;
	unsigned int a = 0;
	char *e = accept;

	for (h = 0; s[h] != ',' && s[h] != '\0'; h++)

		for  (l = 0; e[l] != '\0'; l++)
			if (e[l] == s[h])
				a++;

	return (a);
}
