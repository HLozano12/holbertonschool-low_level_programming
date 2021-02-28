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
	int h;

	for (h = 0; h < argc; h++)
	{
		printf("%s\n", argv[h]);
	}

	return (0);
}
