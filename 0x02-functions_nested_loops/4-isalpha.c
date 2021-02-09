#include "holberton.h"
/**
 * _isalpha - Function to check alpanumeric char
 * @c: int to locate
 * Description: Check for alpabetic char
 * Return: 1 if c is letter, lowercase or uppercase; zero otherwise
 */
int _isalpha(int c)
{
	/* if c is lower case alpa or uppercase alpha */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	/* otherwise */
	else
		return (0);
}
