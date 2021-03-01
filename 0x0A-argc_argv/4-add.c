#include "holberton.h"
/**
 * main - main function
 * Description: print sum of positive intergers
 * @argc: Argument counter
 * @argv: Arguement value
 * Return: zero if no # passed to the program, Error and 1 if not digit
 */
int main(int argc, char *argv[])
{
	int h;
	int sum = 0;

/* starting at array 1 and incriment */
	for (h = 1; h < argc; h++)
	{

/* using previous proj function to check if varible is digit */
		if (!_isdigit(*argv[h]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[h]);
	}

/* if the argument count is 1, no number passed to prog, print 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	printf("%d \n", sum);

	return (0);
}

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
