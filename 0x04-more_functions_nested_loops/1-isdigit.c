#include "holberton.h"
/**
 * _isdigit - Our prototype
 * @c: int varible
 * Return: 1 if digit 0 other wise
 */
int _isdigit(int c)
{
	/* if interger is greater than zero & less than 9 print 1 */
	if (c >= 48 && c <= 57)
		return (1);
	/* otherwise print zero  */
	return (0);
}
