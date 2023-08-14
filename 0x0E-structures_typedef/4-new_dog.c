#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: name
 * @age: age
 * @owner: owner name
 *
 * Return: pointer or null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pointer_to_dog;
	int lenght_of_name = 0, lenght_of_owner_name = 0;

	for (lenght_of_name = 0; name && *(name + lenght_of_name) != '\0';)
		{
			lenght_of_name = lenght_of_name + 1;
		}
		
	for (lenght_of_owner_name = 0; owner && *(owner + lenght_of_owner_name) != '\0';)
		{
			 lenght_of_owner_name = lenght_of_owner_name + 1;
		}
	pointer_to_dog = malloc(sizeof(dog_t));
	if (pointer_to_dog != NULL)
	{
		pointer_to_dog->name = malloc(sizeof(char) * (lenght_of_name + 1));
		if (pointer_to_dog->name == NULL)
		{
			free(pointer_to_dog);
			return (NULL);
		}
		for (lenght_of_name = 0; name && *(name + lenght_of_name) != '\0'; lenght_of_name = lenght_of_name + 1)
			*(pointer_to_dog->name + lenght_of_name) = *(name + lenght_of_name);
		*(pointer_to_dog->name + lenght_of_name) = '\0';
		pointer_to_dog->age = age;
		pointer_to_dog->owner = malloc(sizeof(char) * (lenght_of_owner_name + 1));
		if (pointer_to_dog->owner == NULL)
		{
			free(pointer_to_dog->name);
			free(pointer_to_dog);
			return (NULL);
		}
		for (lenght_of_owner_name = 0; owner && *(owner + lenght_of_owner_name) != '\0';)
				{
				*(pointer_to_dog->owner + lenght_of_owner_name) = *(owner + lenght_of_owner_name);
				lenght_of_owner_name = lenght_of_owner_name + 1;
				}
		*(pointer_to_dog->owner + lenght_of_owner_name) = '\0';
	}
	return (pointer_to_dog);
}
