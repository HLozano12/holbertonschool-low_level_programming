#include "holberton.h"
/**
 * is_prime_number - our prototype function
 * Description: inform if input is a prime number
 * @n: the int to check
 * Return: 1 if input is a prime, otherwise 0
 */
int is_prime_number(int n)
{
	int h;
	int p;

	h = 1;
	p = _Optimus(h, n);

	return (p);

}

/**
 * _Optimus - Helper Function to find if prime number
 * Description: helper function to be called by project prototype
 * @a: int
 * @l: int
 * Return: Prime
 */
int _Optimus(int a, int l)
{
	if (a == l && a > 1)
		return (1);

	if ((l % a == 0 && a > 1) || l <= 1)
		return (0);

	return (_Optimus(a + 1, l));

}
