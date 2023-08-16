
/**
 * int_index - search for int
 * @array: array
 * @size: size
 * @cmp: poiter to function
 *
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int var = 0;

	if (cmp == NULL || size <= 0 || array == NULL)
		return (-1);
	while (cmp(*(array + var)) == 0 && var < size)
		var = var + 1;
	int res;
	if(cmp(*(array + var)) == 0)
		return (-1);
	else
		return (var);
}
