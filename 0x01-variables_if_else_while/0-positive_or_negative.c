#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints conditional of statement
 *Return: Always zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* is random# positive */
	if (n > 0)
		printf("%d is positive\n", n);

	/* is random# negative */
	else if (n < 0)
		printf("%d is negative\n", n);

	/* is random# just a zero */
	else
		printf("%d is zero\n", n);

	return (0);
}
