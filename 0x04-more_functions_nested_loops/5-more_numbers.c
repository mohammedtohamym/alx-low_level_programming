#include "main.h"

/**
 * more_numbers - prints
 */
void more_numbers(void)
{
	int ib;
	int vj;

	for (vj = 0; vj < 10; vj++)
	{
		for (ib = 0; ib <= 14; ib++)
		{
			if (ib > 9)
				_putchar((ib / 10) + '0');
			_putchar((ib % 10) + '0');
		}
		_putchar('\n');
	}
}
