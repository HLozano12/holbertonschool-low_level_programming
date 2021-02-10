#include "holberton.h"
/**
 * print_last_digit - Our prototype
 * @i: our int
 * Return: last digit of #
 */
int print_last_digit(int i)
{
	int k;

	/* k represents the last numner of the given number */
	k = i % 10;

	/* makes number positive */
	if (i < 0)
		k = k * -1;

	_putchar(k + '0');

	return (k);
}
