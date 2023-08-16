#include <stdlib.h>

/**
 * array_iterator - run function on whole array
 * @array: array
 * @size: lenght
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t var;

	if (action != NULL && array != NULL)
	{
		for (var = 0; var < size;)
		{
			action(*(array + var));
			var = var + 1;
		}
	}
}
