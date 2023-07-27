#include "main.h"

/**
 * reverse_array - Reverses 
 * @aa: pointer
 * @nn: length
 */
void reverse_array(int *aa, int nn)
{
	int yi;

	for (yi = 0; yi < nn / 2; yi++)
	{
		int tempe = *(aa + nn - yi - 1);

		*(aa + nn - yi - 1) = *(aa + yi);
		*(aa + yi) = tempe;
	}
}
