#include "variadic_functions.h"
/**
 * print_strings - function prototype
 * Description: Print Strings
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to func
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int h;
	char *a;

	va_start(strings, n);
	for (h = 0; h < n; h++)
	{
		a = va_arg(strings, char*);

/* If one of the string is NULL, print (nil) instead */
		if (a == NULL)
			printf("(nil)");

		else
		{
			printf("%s", a);
		}

/* If separator is NULL, dont print it */
		if (separator != NULL)
		{
			if (h < n - 1)
				printf("%s", separator);
		}
	}
/* Print a new line at the end of your function */
	printf("\n");

	va_end(strings);
}
