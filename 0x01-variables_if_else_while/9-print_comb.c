#include <stdio.h>
/**
 * main - main function
 * Description: Print all possible combo of  single digits
 * Return: 0
 */
int main(void)
{
	int h;

	for (h = 48; h <= 57; h++)
	{
		putchar(h);

		if (h == 57)
			break;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
