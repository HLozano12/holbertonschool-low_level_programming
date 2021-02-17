#include "holberton.h"
/**
 * rev_string - prototype function
 * Description: Reverse the string
 * @s: our char pointer
 * Return: void
 */
void rev_string(char *s)
{
	int beg;
	int end;
	int len;
	char c;

/* reference to task 2 runction which gives length of string */
	len = _strlen(s);
/* removes null byte, change the end to the beginning */
	for (beg = 0, end = len - 1; beg < end; beg++, end--)
	{
		c = s[beg];
		s[beg] = s[end];
		s[end] = c;
	}
}


/* Task 2 function */
/**
 * _strlen - Prototype function from task 2
 * @s: our pointer
 * Description: Return length of string
 * Return: an int
 */
		int _strlen(char *s)
	{
		int len = 0;

		while (*(s + len) != '\0')
		{
			len++;
		}
		return (len);
	}
