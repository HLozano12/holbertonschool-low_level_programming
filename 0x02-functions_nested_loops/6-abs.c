#include "holberton.h"
/**
 * _abs - Our function to compute the absolute value of interger argument j
 * Description: Compue the absolute value of an Int
 * @k: Our interger
 * Return: The absolute value
 */
int _abs(int k)
{
	if (k < 0)
		return (-k);

	return (k);
}
