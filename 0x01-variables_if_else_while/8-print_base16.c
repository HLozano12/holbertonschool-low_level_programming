#include <stdio.h>
/**
 * main - Main function
 * Description: Print all numbers of base 16
 * Return: zero
 */
int main(void)
{
	int h = 0;
	int l;

/* Moves us from 0-9 of hexidecimal */
	for (; h <= 9; h++)
	{
		putchar(h + '0');
	}
/* moves us from a - f of hexidecimal */
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}

	putchar('\n');

	return (0);
}
