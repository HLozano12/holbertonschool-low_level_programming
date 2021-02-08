#include <stdio.h>
/**
 * main - Function for us
 * Description: Print out numbers
 * Return: always zero
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
