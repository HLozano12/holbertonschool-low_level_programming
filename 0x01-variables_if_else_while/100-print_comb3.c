#include <stdio.h>
/**
 * main - main function
 * Description: Print all possible combo of  single digits
 * Return: 0
 */
int main(void)
{
	int h;
	int a = 49;
	int x = 0;

/* Set movement for ones position */
	for (h = 48; h <= 57; h++)
	{
/* set movement starting at one at tens pos */
		for (; a <= 57; a++)
		{
			putchar(h);
			putchar(a);
/* if ones not 8 and tens not 9 print comma and space */
			if (h != 56 || a != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		x++;
		a = 49 + x;
	}

	putchar('\n');

	return (0);
}
