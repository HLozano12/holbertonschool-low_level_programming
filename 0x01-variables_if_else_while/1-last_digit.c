#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - our main function
 * Return: always zero
 *
 */
int main(void)
{

	int n, b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* modulo tells to be of last digit */
	b = n % 10;

	/* checks if last digit is greater than 5 */
	if (b > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, b);

	/* check if last digit is equal to zero */
	else if (b == 0)
		printf("Last digit of %d is %d and is 0\n", n, b);

	/* checks if last digit is less than 6 and not zero */
	else if (b < 6 && b != 0)
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, b);

	return (0);
}
