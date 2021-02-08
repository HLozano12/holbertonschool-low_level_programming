#include <stdio.h>
#include <stdlib.h>
/**
 * main - Our function
 * Description: Print alphabet in lowercase reverse
 * Return: Always zero
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
