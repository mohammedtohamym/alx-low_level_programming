#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print variable
 * @d: pointer to the desired variable
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL){
			printf("Name: %s\n",d->name);
		}
		else{
			printf("Name: (nil)\n");
		}
		
		if (d->name != NULL){
			printf("Age: %s\n",d->Age);
		}
		else{
			printf("Age: (nil)\n");
		}

		if (d->name != NULL){
			printf("Owner: %s\n",d->owner);
		}
		else{
			printf("Owner: (nil)\n");
		}
	}
}
