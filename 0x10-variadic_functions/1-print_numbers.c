#include "variadic_functions.h"
/**
 * print_numbers - Function Prototype
 * Description: Print Numbers
 * @separator: The string to be printed betweeen nums
 * @n: Num of integers passed to func
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int h = 0;

	va_list numbers;

	va_start(numbers, n);

	for (h = 0; h < n; h++)
	{

		if (separator != NULL && h != (n - 1))
			printf("%i%s", va_arg(numbers, int), separator);

		else
			printf("%i", va_arg(numbers, int));
	}

	printf("\n");
	va_end(numbers);
}
