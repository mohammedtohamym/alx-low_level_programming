#include "main.h"

/**
 * print_chessboard - Prints chessboard
 * @a: string representation chessboard
 */
void print_chessboard(char (*a)[8])
{
	int q, k;

	for (q = 0; q < 8; q=q+1)
	{
		for (k = 0; k < 8; k=k+1)
			_putchar(*(*(a + q) + k));
		_putchar('\n');
	}
}
