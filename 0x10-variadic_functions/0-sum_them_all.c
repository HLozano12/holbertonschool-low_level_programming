#include "variadic_functions.h"
/**
 * sum_them_all - function prototype
 * Description: Return the sum of all parameters
 * @n:
 *
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int h, sums;

	va_start(args, n);

	sums = 0;

	for (h = 0; h < n; h++)
		sums += va_arg(args, int);

	va_end(args);
	return (sums);
}
