#include "main.h"

/*
 * _puts_recursion - prints a string recursivley
 * @*s: pointer to the first character in the string
 *
 * Description: ths functions uses pass by refrence to
 * print a string
 * Return: no return
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}



}
