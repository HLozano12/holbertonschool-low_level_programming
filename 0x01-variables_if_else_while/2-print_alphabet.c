#include <stdio.h>
#include <stdlib.h>
/**
 * main - Our function
 * Description: Print alphabet in lowercase
 * Return: Always zero
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
