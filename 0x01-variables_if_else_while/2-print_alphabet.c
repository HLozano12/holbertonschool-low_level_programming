#include <stdio.h>
#include <stdlib.h>
/**
 * main - Our function
 * Description: Print alphabet in lowercase
 * Return: Always zero
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');

	return (0);
}
