#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#endif
