#include "holberton.h"
/**
 * main - Main function
 * Description: Change multiples of 3, 5, to text
 * Return: zero
 */
int main(void)
{
	int h;

/* creates the 1 - 100 string */
	for (h = 1; h <= 100; h++)
	{
/* Divisable by 3 & 5? print FizzBuzz */
		if ((h % 3 == 0) && (h % 5 == 0))
			printf("FizzBuzz");

/* if divisable by three leaving no remainder, print Fizz */
		else if (h % 3 == 0)
			printf("Fizz");

/* if divisable by 5 w/o remainder, print Buzz */
		else if (h % 5 == 0)
			printf("Buzz");

/* Print all other nubers */
		else
			printf("%d", h);

/* applies the space after each # or text */
		if (h < 100)
			putchar(' ');

	}

	putchar('\n');

	return (0);
}
