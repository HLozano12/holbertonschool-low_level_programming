#include "holberton.h"
/**
 * main - main function
 * Description: print the number of args passed into it
 * @argc: Argument counter
 * @argv: Arguement value
 * Return: zero if passed
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
