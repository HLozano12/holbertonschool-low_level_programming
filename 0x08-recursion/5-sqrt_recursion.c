#include "holberton.h"
/**
 * _sqrt_recursion - Prototype function
 * Description: return square root of a number
 * @n:number to be square rooted
 * Return: The natural square root or -1
 */
int _sqrt_recursion(int n)
{
	return (_find_sqrt(n, 0));
}

/**
 * _find_sqrt - Made function to locate square root
 * Description: find out what the square root number is
 * @h: Interger provided
 * @l: attempt of sqrt
 * Return: the square root
 */
int _find_sqrt(int h, int l)
{
	if (l * l == h)
		return (l);

	if (l * l > h)
		return (-1);

	else
		return (_find_sqrt(h, l + 1));
}
