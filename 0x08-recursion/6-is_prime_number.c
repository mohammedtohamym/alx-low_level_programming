#include "main.h"
#include <stdio.h>

/**
* check_for_prime - gets a number and performs cheks on it
* @n: the number
* @k: the comparator. starts at 2
*
* Return: 1 if number is prime, 0 otherwise
*/

int check_for_prime(int n, int k)
{
	if (n == k)
		return (1);
	else if (n % k == 0 || n < 2)
		return (0);
	else
		return (check_for_prime(n, k + 1));

}

/**
* is_prime_number - checks if a number is prime
* @n: the number
*
* Return: 1 if number is prime or 0 if not
*/

int is_prime_number(int n)
{
	return (check_for_prime(n, 2));
}
