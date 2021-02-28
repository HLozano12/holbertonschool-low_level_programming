#include "holberton.h"
/**
 * main - main function
 * Description: Print product of two numbers
 * @argc: Argument counter
 * @argv: Arguement value
 * Return: zero if passed, 1 if error(more than 2 intergers entered)
 */
int main(int argc, char *argv[])
{
/* per project, if program receives more than 2 intergers print error */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
/* print the product of aplha to interger of array 1 and 2 */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
