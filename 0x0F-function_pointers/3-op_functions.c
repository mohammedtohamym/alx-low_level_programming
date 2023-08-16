#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - sum
 *
 * @a: num_1
 * @b: num_2
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - diff
 *
 * @a: num_1
 * @b: num_2
 *
 * Return: diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - produtct
 *
 * @a: num_1
 * @b: num_2
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - quotient
 *
 * @a: num_1
 * @b: num_2
 *
 * Return: Tquotient or 0
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	
	puts("Error");
	
	exit(100);
	return (0);
}

/**
 * op_mod - remainder
 *
 * @a: num_1
 * @b: num_2
 *
 * Return: reaminder or 0
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	
	puts("Error");
	
	exit(100);
	return (0);
}
