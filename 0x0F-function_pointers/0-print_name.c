
/**
 * print_name - print the name
 * @name: name
 * @f: pinter to function
 */
 
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
