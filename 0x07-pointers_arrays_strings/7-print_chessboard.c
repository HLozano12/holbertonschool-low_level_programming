#include "holberton.h"
/**
 * print_chessboard - prototype function
 * Description: Print Chessboard
 * @a: Pointer
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, colm;

	for (row = 0; row < 8; row++)
	{
		for (colm = 0; colm < 8; colm++)
			_putchar(a[row][colm]);

			_putchar('\n');

	}


}
