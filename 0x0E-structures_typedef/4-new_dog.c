#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 * Return: address stored in pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = strcpy(dog->name, name);
	dog->owner = strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
