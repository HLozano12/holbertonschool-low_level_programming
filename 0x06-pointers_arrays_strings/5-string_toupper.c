#include "holberton.h"
/**
 * string_toupper - prototype function
 * Description: change lowercase letters to uppercase
 * @s: our pointer
 *
 * Return: char
 */
char *string_toupper(char *s)
{
	int h = 0;

	while (s[h])
	{
/* set up array element to be within alphabet */
		if (s[h] >= 97 && s[h] <= 122)
			s[h] -= 32;

/* increment value of element */
		h++;
	}

	return (s);
}
