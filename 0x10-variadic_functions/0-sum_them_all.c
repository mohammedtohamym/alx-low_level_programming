#include <stdarg.h>

/**
 * sum_them_all - calculates sum
 * @n: parameter num
 *
 * Return: sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int counter;
	int the_sum = 0;

	if (n > 0)
	{
		va_start(args, n);

		for (counter = 0; counter < n;)
		{
			the_sum = the_sum + va_arg(args, int);
			counter = counter + 1;
		}
		va_end(args);
	}
	
	return (the_sum);
}
