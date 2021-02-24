#include "holberton.h"
/**
 * factorial - prototype function
 * Decription: Return the factorial of a given number
 * @n: our int
 * Return: -1 if less than zero, 0 if is 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
		return (n * factorial(n - 1));


}
