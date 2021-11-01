#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: name of dog owner
 *
 * Return: NULL if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;
	char *nd_name, *nd_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	doggie = malloc(sizeof(dog_t));

	if (doggie == NULL)
		return (NULL);

	nd_name = strdup(name);

	if (nd_name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	else
		doggie->name = nd_name;

	doggie->age = age;
	nd_owner = strdup(owner);

	if (nd_owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	else
		doggie->owner = nd_owner;

	return (doggie);
}
