#include "dog.h"
/**
 *new_dog - creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: a copy of dog info
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
		return (NULL);
	dog->name = name;
	dog->owner = owner;
	dog->age = age;
	return (dog);
}