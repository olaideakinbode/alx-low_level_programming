#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nm, ow, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nm = 0; name[nm]; nm++)
		;
	nm++;
	dog->name = malloc(nm * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nm; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ow = 0; owner[ow]; ow++)
		;
	ow++;
	dog->owner = malloc(ow * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ow; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
