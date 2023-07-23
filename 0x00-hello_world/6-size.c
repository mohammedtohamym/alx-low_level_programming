#include <stdio.h>

/**
 * main - Prints the size of various types
 *
 * Return: 0 if program runs and executed successfully
 */
int main(void)
{
	printf("Size of a char is: %d byte(s)\n", sizeof(char));
	printf("Size of an int is: %d byte(s)\n", sizeof(int));
	printf("Size of a long int is: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int is: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float is: %d byte(s)\n", sizeof(float));
	return (0);
}
