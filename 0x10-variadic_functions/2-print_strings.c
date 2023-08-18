#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - string then new line
 * @separator: number separatoin
 * @n: string passed count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list args;

	char *string_pointer;

	va_start(args, n);
	for (counter = 0; counter < n;)
	{
		string_pointer = va_arg(args, char *);
		if (separator != NULL && counter < n && counter > 0)
			printf("%s", separator);
		if(string_pointer != NULL)
			printf("%s",string_pointer);
		else
			printf("%s", "(nil)");
		counter = counter + 1;
	}

	printf("\n");
	va_end(args);
}
