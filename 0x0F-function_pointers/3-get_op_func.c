#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - match operator with operation
 * @s: arg
 *
 * Return: pointer or null
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int var = 0;

	while (var < 5 && s != NULL)
	{
		if (*(ops + var)->op == *s)
		{
			if(*s && *(s + 1) == '\0')
				return (*(ops + var)->f);
		}
		var = var + 1;
	}
	return (NULL);
}
