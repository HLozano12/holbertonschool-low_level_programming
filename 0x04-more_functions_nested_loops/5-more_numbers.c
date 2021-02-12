#include "holberton.h"
/**
 * more_numbers - our prototype
 * Description: Print 0-14 10x
 * Return: Null
 */
void more_numbers(void)
{
	int prod;
	int num;

	/* prints 10x */
	for (prod = 0; prod < 10; prod++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar('0' + num / 10);
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
