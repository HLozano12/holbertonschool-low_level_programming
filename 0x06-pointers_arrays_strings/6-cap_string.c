#include "holberton.h"
/**
 * cap_string - prototype function
 * Description: capitalize all words of a string
 * @s: char pointer
 * Return: char
 */
char *cap_string(char *s)
{
	int h;

	for (h = 0; s[h] != '\0'; h++)
	{
		if (h == 0)
		{
			if (s[h] >= 'a' && s[h] <= 'z')
				s[h] = s[h] - 32;
			continue;
		}
		if (s[h] == ' ')
		{
			++h;

			if (s[h] >= 'a' && s[h] <= 'z')
			{
				s[h] = s[h] - 32;
				continue;
			}
		}
		else
		{
			if (s[h] >= 'A' && s[h] <= 'Z')
				s[h] = s[h] + 32;
		}
	}
	return (0);
}
