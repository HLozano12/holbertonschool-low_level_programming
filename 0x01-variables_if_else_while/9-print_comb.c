#include <stdio.h>

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

	return 0;
}
