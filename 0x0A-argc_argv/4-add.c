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
		if ((*argv[h] < '0' ||
*argv[h] > '9') && *argv[h] != '-')
		{
			printf("Error\n");
			return (1);
		}


/* If anything else, provide the sum of positive numbers and return 0 */
		else
		{
			l += atoi(argv[h]);
		}

	}

	printf("%d\n", l);
	return (0);
}
