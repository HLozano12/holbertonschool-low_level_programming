#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main Function
 * Description: Print alphabet from lower to uppercase
 * Return: Return zero always
 */
int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
