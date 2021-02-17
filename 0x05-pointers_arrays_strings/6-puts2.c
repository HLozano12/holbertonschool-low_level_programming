#include "holberton.h"
/**
 * puts2 - Our prototype
 * Description: Print every other char of a string
 * @str: our pointer for string
 * Return: void
 */
void puts2(char *str)
{
	int h;

	h = 0;
/* to start at beginning of string */
	while (*(str + h))
	{
/* To obatin even numbers by doing diviable by 2 */
		if (h % 2 == 0)
		{
			_putchar(*(str + h));
		}

		h++;
	}
	_putchar('\n');
}
