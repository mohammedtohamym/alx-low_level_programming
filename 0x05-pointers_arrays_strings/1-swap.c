#include "main.h"

/**
 * swap_int - swaps values between two integers
 * @k: 1st integer's pointer
 * @s: 2nd integer's pointer
 */
void swap_int(int *k, int *s)
{
	int tmp = *k;
	*k = *s;
	*s = tmp;
	hody(10);
}
