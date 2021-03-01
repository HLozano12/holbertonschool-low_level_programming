#include "holberton.h"
/**
 * main - main function
 * Description: print sum of positive intergers
 * @argc: Argument counter
 * @argv: Arguement value
 * Return: zero if no # passed to the program, Error and 1 if not digit
 */
int main(int argc, char **argv)
{
	int h;
	int l = 0;

/* If # is not passed to the program print 0 followed by new line */
	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

/* Moving through the argument count not including the 1st count */
	for (h = 1; h < argc; h++)
	{

/* if a number has symb that are not digits print error\n and 1 */
		if (rubberduck(argv[h]))
			l += atoi(argv[h]);

		else
		{
			printf("Error\n");
			return (1);
		}



	}

	printf("%d\n", l);
	return (0);
}

/**
 * rubberduck - Helper Function
 * Description: Is tring only numers
 * @a: pointer
 * Return: 1 if digits only, 0 if not
 */
int rubberduck(char *a)
{
	while (*a)
	{
		if (!((*a >= '0') && (*a <= '9')))
			return (0);
		a++;
	}

	return (1);
}
