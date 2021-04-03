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
	int f_desc;
	ssize_t amnt;
	char *buf;

	/* if filename is NULL return 0 */
	if (!filename)
		return (0);

	f_desc = open(filename, 0_RDONLY);
	if (f_desc == -1)
		return (0);
	buf = malloc(letters);
	if (!buf)
		return (0);
	amnt = read(f_desc, buf, letter);
	if (write(STDOUT_FILENO, buf, amnt) < 0)
		amnt = 0;
	close(f_desc);
	free(buf);
	return (amnt);

}
