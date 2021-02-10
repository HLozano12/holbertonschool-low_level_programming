#include "holberton.h"
/**
 * jack_bauer - prints ever minute of the day
 * Return: void/NULL
 *
 */
void jack_bauer(void)
{
	int HH, MM;

	/* sets the value of hours */
	for (HH =  0; HH < 24;  HH++)
		/* sets the value of mintues */
		for (MM = 0; MM < 60; MM++)
		{
			/* locate the 10th place */
			_putchar('0' + HH / 10);
			/* obtain the last digit of HH */
			_putchar('0' + HH % 10);
			_putchar(':');
			_putchar('0' + MM / 10);
			_putchar('0' + MM % 10);
			_putchar('\n');
		}
}
