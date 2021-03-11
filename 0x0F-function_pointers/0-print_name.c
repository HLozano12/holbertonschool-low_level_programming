#include "function_pointers.h"
/**
 * print_name - prototype function
 * Description: Print a name
 * @name: Our char array
 * @f: Our Funciton Pointer
 * Return: Void per prototype
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
