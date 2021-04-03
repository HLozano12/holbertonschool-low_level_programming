#include "holberton.h"
/**
 * read_textfile - function protoype
 * Description: resd text file and print to sdout
 * @filename: Name of file in our string
 * @letters: Amount of leters to read and print
 * Return: 0 if NULL, # of letters it can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rd, wd;
	int op = open(filename, 0_RDONLY);
	size_t h = 0;
	char buf;

	/* if filename is NULL return 0 */
	if (op == -1 || filename == NULL)
		return (0);

	while ((rd = read(op, &buf, sizeof(buf))) > 0 && i < letters)
	{
		wd = write(STDOUT_FILENO, &buf, sizeof(buf));
		if (wd == -1)
			return (0);
		h++;
	}

	close(op);
	return (h);

}
