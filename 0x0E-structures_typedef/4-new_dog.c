#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: dog name
 * @age: dog age.
 * @owner: dog owner.
 * Return: struct dog else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int x, ln, lo;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (ln = 0; name[ln]; ln++)
		;

	for (lo = 0; owner[lo]; lo++)
		;

	p_dog->name = malloc(ln + 1);
	p_dog->owner = malloc(lo + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (x = 0; x < ln; x++)
		p_dog->name[x] = name[x];
	p_dog->name[x] = '\0';

	p_dog->age = age;


	for (x = 0; x < lo; x++)
		p_dog->owner[x] = owner[x];
	p_dog->owner[x] = '\0';

	return (p_dog);
}
