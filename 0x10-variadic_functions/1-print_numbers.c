#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - num then new line
 * @separator: number separation
 * @n: argument number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list args;

	va_start(args, n);
	for (counter = 0; counter < n;)
	{
		if (separator != NULL && counter < n && counter > 0)
			printf("%s", separator);

		printf("%d", va_arg(args, int));
		counter = counter + 1;
	}

	printf("\n");
	va_end(args);
}
